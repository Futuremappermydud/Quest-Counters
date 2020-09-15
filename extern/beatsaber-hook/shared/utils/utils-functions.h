#ifndef UTILS_FUNCTIONS_H
#define UTILS_FUNCTIONS_H

#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <string_view>
#include <vector>

struct Il2CppString;
#ifndef __cplusplus
bool = uchar8_t;
#endif /* __cplusplus */

// va_list wrapper for string_format
std::string string_vformat(const std::string_view format, va_list args);
// Returns a string_view of the given Il2CppString*
std::u16string_view csstrtostr(Il2CppString* in);
// Sets the given cs_string using the given string/char16 array
void setcsstr(Il2CppString* in, std::u16string_view str);
// Converts a UTF16 string to a UTF8 string
std::string to_utf8(std::u16string_view view);
// Converts a UTF8 string to a UTF16 string
std::u16string to_utf16(std::string_view view);
// Dumps the 'before' bytes before and 'after' bytes after the given pointer to log
void dump(int before, int after, void* ptr);
// Reads all of the text of a file at the given filename. If the file does not exist, returns an empty string.
std::string readfile(std::string_view filename);
// Reads all bytes from the provided file at the given filename. If the file does not exist, returns an empty vector.
std::vector<char> readbytes(std::string_view filename);
// Writes all of the text to a file at the given filename. Returns true on success, false otherwise
bool writefile(std::string_view filename, std::string_view text);
// Deletes a file at the given filename. Returns true on success, false otherwise
bool deletefile(std::string_view filename);
// Returns if a file exists and can be written to / read from
bool fileexists(std::string_view filename);
// Returns if a directory exists and can be written to / read from
bool direxists(std::string_view dirname);
// Returns a loaded UnityEngine.Object from an asset (NOT YET IMPLEMENTED!)
void* loadfromasset(const char* assetFilePath, const char* assetName);

#endif /* UTILS_FUNCTIONS_H */
