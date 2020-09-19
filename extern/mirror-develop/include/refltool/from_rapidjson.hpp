/**
 * @file refltool/from_rapidjson.hpp
 * @brief Implementation of deserialization from JSON using RapidJSON
 *
 * Copyright Matus Chochlik.
 * Distributed under the Boost Software License, Version 1.0.
 * See accompanying file LICENSE_1_0.txt or copy at
 *  http://www.boost.org/LICENSE_1_0.txt
 */

#ifndef REFLTOOL_FROM_RAPIDJSON_1105240825_HPP
#define REFLTOOL_FROM_RAPIDJSON_1105240825_HPP

#include "string_to_enum.hpp"

#include <puddle/reflection.hpp>
#include <puddle/sequence_ops.hpp>
#include <puddle/meta_named_ops.hpp>
#include <puddle/meta_variable_ops.hpp>
#include <puddle/meta_constant_ops.hpp>
#include <puddle/meta_record_ops.hpp>
#include <puddle/meta_class_ops.hpp>
#include <puddle/meta_enum_ops.hpp>
#include <puddle/string.hpp>

#include <mirror/reflection.hpp>
#include <mirror/get_type.hpp>
#include <mirror/transform.hpp>
#include <mirror/repack.hpp>

#include <rapidjson/document.h>
#include <map>
#include <set>
#include <tuple>
#include <array>
#include <vector>
#include <memory>
#include <cstddef>

namespace refltool {

template <typename T>
struct rapidjson_loader;

template <>
struct rapidjson_loader<bool>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		bool& v
	) const {
		if(rjv.IsBool()) {
			v = rjv.GetBool();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<char>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		char& v
	) const {
		if(rjv.IsString() && rjv.GetStringLength() == 1) {
			v = *rjv.GetString();
			return true;
		} else { return false; }
	}
};


template <>
struct rapidjson_loader<int>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		int& v
	) const {
		if(rjv.IsInt()) {
			v = rjv.GetInt();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<unsigned>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		unsigned& v
	) const {
		if(rjv.IsUint()) {
			v = rjv.GetUint();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<int64_t>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		int64_t& v
	) const {
		if(rjv.IsInt64()) {
			v = rjv.GetInt64();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<uint64_t>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		uint64_t& v
	) const {
		if(rjv.IsUint64()) {
			v = rjv.GetUint64();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<float>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		float& v
	) const {
		if(rjv.IsFloat()) {
			v = rjv.GetFloat();
			return true;
		} else { return false; }
	}
};

template <>
struct rapidjson_loader<double>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		double& v
	) const {
		if(rjv.IsDouble()) {
			v = rjv.GetDouble();
			return true;
		} else { return false; }
	}
};

// unique_ptr
template <typename T, typename D>
struct rapidjson_loader<std::unique_ptr<T, D>>
{
private:
	rapidjson_loader<T> _loader;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		std::unique_ptr<T, D>& v
	) const {
		if(rjv.IsNull()) {
			v.reset();
			return true;
		} else {
			T tmpval;
			if(_loader(rjv, tmpval)) {
				v.reset(new T(std::move(tmpval)));
				return true;
			}
		}
		return false;
	}
};

// shared_ptr
template <typename T>
struct rapidjson_loader<std::shared_ptr<T>>
{
private:
	rapidjson_loader<T> _loader;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		std::shared_ptr<T>& v
	) const {
		if(rjv.IsNull()) {
			v.reset();
			return true;
		} else {
			T tmpval;
			if(_loader(rjv, tmpval)) {
				v.reset(new T(std::move(tmpval)));
				return true;
			}
		}
		return false;
	}
};

// set
template <typename T, typename C, typename A>
struct rapidjson_loader<std::set<T, C, A>>
{
private:
	rapidjson_loader<T> _loader;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rja,
		std::set<T, C, A>& c
	) const {
		using namespace puddle;

		if(rja.IsArray()) {
			c.clear();

			const rapidjson::SizeType n = rja.Size();

			for(rapidjson::SizeType i=0; i<n; ++i) {
				T tmpval;
				if(!_loader(rja[i], tmpval)) {
					return false;
				}
				c.emplace(std::move(tmpval));
			}
			return true;
		}
		return false;
	}
};

// map
template <typename K, typename V, typename C, typename A>
struct rapidjson_loader<std::map<K, V, C, A>>
{
private:
	static_assert(
		std::is_same<K, char>::value ||
		std::is_same<K, std::string>::value ||
		std::is_enum<K>::value,
		"Map key must be a string on enum type"
	);

	rapidjson_loader<K> _keyldr;
	rapidjson_loader<V> _valldr;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjo,
		std::map<K, V, C, A>& c
	) const {
		using namespace puddle;

		if(rjo.IsObject()) {
			c.clear();

			for(auto i=rjo.MemberBegin(); i!=rjo.MemberEnd(); ++i) {
				K tmpkey;
				if(!_keyldr(i->name, tmpkey)) {
					return false;
				}
				V tmpval;
				if(!_valldr(i->value, tmpval)) {
					return false;
				}
				c.emplace(
					std::move(tmpkey),
					std::move(tmpval)
				);
			}
			return true;
		}
		return false;
	}
};

// array
template <typename T, std::size_t N>
struct rapidjson_loader<std::array<T, N>>
{
private:
	rapidjson_loader<T> _loader;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rja,
		std::array<T, N>& r
	) const {
		using namespace puddle;

		if(rja.IsArray()) {
			const rapidjson::SizeType n = rja.Size();

			if(n == N) {
				for(rapidjson::SizeType i=0; i<n; ++i) {
					if(!_loader(rja[i], r[i])) {
						return false;
					}
				}
				return true;
			}
		}
		return false;
	}
};

// vector
template <typename T, typename A>
struct rapidjson_loader<std::vector<T, A>>
{
private:
	rapidjson_loader<T> _loader;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rja,
		std::vector<T, A>& r
	) const {
		using namespace puddle;

		if(rja.IsArray()) {
			const rapidjson::SizeType n = rja.Size();
			r.resize(n);
			for(rapidjson::SizeType i=0; i<n; ++i) {
				if(!_loader(rja[i], r[i])) {
					return false;
				}
			}
			return true;
		}
		return false;
	}
};

// tuple
template <typename ... T>
struct rapidjson_loader<std::tuple<T...>>
{
private:
	std::tuple<rapidjson_loader<T>...> _loaders;

	template <typename Enc, typename Alloc, typename E>
	bool _load_element(
		const rapidjson::GenericValue<Enc, Alloc>& rja,
		std::size_t idx,
		E& e,
		const rapidjson_loader<E>& loader
	) const {
		return loader(rja[rapidjson::SizeType(idx)], e);
	}

	template <typename Enc, typename Alloc, std::size_t ... I>
	bool _load_tuple(
		const rapidjson::GenericValue<Enc, Alloc>& rja,
		std::tuple<T...>& t,
		std::index_sequence<I...>
	) const {
		return (... && _load_element(
			rja, I,
			std::get<I>(t),
			std::get<I>(_loaders)
		));
	}
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rja,
		std::tuple<T...>& tup
	) const {
		if(rja.IsArray()) {
			return _load_tuple(
				rja, tup,
				std::make_index_sequence<sizeof...(T)>{}
			);
		} else { return false; }
	}
};

// string
template <>
struct rapidjson_loader<std::string>
{
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		std::string& v
	) const {
		using namespace rapidjson;
		if(rjv.IsString()) {
			v.assign(rjv.GetString(), rjv.GetStringLength());
			return true;
		} else { return false; }
	}
};

template <typename T>
struct rapidjson_loader_class
{
private:
	template <typename MA>
	struct _attrldr_t
	{
	private:
		using AT = mirror::get_reflected_type<mirror::get_type<MA>>;
		rapidjson_loader<AT> _ldr;
	public:
		template <typename Encoding, typename Allocator>
		bool operator()(
			const rapidjson::GenericValue<Encoding, Allocator>& rjv,
			T& v
		) const {
			using namespace puddle;

			MA ma;
			auto name = c_str(get_base_name(ma));
			auto pos = rjv.FindMember(name);

			if(pos == rjv.MemberEnd()) {
				return false;
			}
			return _ldr(pos->value, dereference(ma, v));
		}
	};

	mirror::repack<
		mirror::transform<
			_attrldr_t,
			mirror::get_data_members<MIRRORED(T)>
		>, std::tuple
	> _attrldrs;
public:
	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		T& v
	) const {
		using namespace puddle;

		if(!rjv.IsObject()) { return false; }

		return std::apply(
			[&rjv,&v](auto ... fn) {
				return (... && fn(rjv, v));
			}, _attrldrs
		);
	}
};

template <typename T>
struct rapidjson_loader_enum
{
private:
	const string_to_enum_map_t<T> _s2emap;
public:
	rapidjson_loader_enum(void)
	 : _s2emap(make_string_to_enum_map<T>())
	{ }

	template <typename Encoding, typename Allocator>
	bool operator()(
		const rapidjson::GenericValue<Encoding, Allocator>& rjv,
		T& v
	) const {
		using namespace puddle;
		using namespace rapidjson;

		if(!rjv.IsString()) { return false; }

		std::string str(rjv.GetString(), rjv.GetStringLength());

		auto p = _s2emap.find(str);
		if(p != _s2emap.end()) {
			v = p->second;
			return true;
		} else { return false; }
	}
};

template <typename T>
struct rapidjson_loader
 : std::conditional_t<
	std::is_enum<T>::value,
	rapidjson_loader_enum<T>,
	rapidjson_loader_class<T>
> { };

// from_rapidjson
template <typename Encoding, typename Allocator, typename T>
static inline
bool from_rapidjson(
	const rapidjson::GenericValue<Encoding, Allocator>& rjv,
	T& v
) {
	rapidjson_loader<T> rjl;
	return rjl(rjv, v);
}

} // namespace refltool

#endif //include guard

