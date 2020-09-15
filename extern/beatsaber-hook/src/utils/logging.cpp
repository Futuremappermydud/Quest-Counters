// TODO: Move this to another place and make it #define agnostic
// Ideally, we would be able to call a one time setup function, perhaps with a ModInfo parameter
// This would either return or initialize a logger instance for us to use with future calls to "log"

#include "../../shared/utils/logging.hpp"
#include "modloader/shared/modloader.hpp"
#include <string_view>
#include <string>
#include <memory>
#include "../../shared/utils/utils-functions.h"

#ifndef VERSION
#define VERSION "0.0.0"
#endif

const Logger& Logger::get() {
    static Logger utilsLogger("UtilsLogger|v" VERSION);
    return utilsLogger;
}

Logger::Logger(std::string_view tag_) {
    tag = std::string("QuestHook[") + tag_.data() + "]";
}

Logger::Logger(ModInfo info) {
    tag = "QuestHook[" + info.id + "|v" + info.version + "]";
}

#define LOG_MAX_CHARS 1000
void Logger::log(Logging::Level lvl, std::string str) const {
    if (str.length() > LOG_MAX_CHARS) {
        std::size_t i = 0;
        while (i < str.length()) {
            auto sub = str.substr(i, LOG_MAX_CHARS);
            auto newline = sub.find('\n');
            if (newline != std::string::npos) {
                sub = sub.substr(0, newline);
                i += newline + 1; // Skip actual newline character
            } else {
                i += LOG_MAX_CHARS;
            }
            __android_log_write(lvl, tag.c_str(), sub.c_str());
        }
    } else {
        __android_log_write(lvl, tag.c_str(), str.c_str());
    }
}

void Logger::log(Logging::Level lvl, std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(lvl, s);
}

void Logger::critical(std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(Logging::CRITICAL, s);
}

void Logger::error(std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(Logging::ERROR, s);
}

void Logger::warning(std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(Logging::WARNING, s);
}

void Logger::info(std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(Logging::INFO, s);
}

void Logger::debug(std::string_view fmt, ...) const {
    va_list args;
    va_start(args, fmt);
    auto s = string_vformat(fmt, args);
    va_end(args);
    log(Logging::DEBUG, s);
}

#ifdef FILE_LOG

#include "../../shared/utils/utils.h"
#include <chrono>
#include <iomanip>
#include <sstream>
#include <string>
static FILE *fp;
static bool logPathCreated = false;
static std::string logPath;

void log_create(Mod mod) {
    if (!logPathCreated) {
        logPath = string_format(LOG_PATH_FORMAT, Modloader::getApplicationId());
        logPathCreated = true;
    }
    if (!direxists(logPath.c_str())) {
        // DANGER
        mkpath(logPath.c_str(), 0700);
    }
    fp = fopen((logPath + mod.info.id + ".log").c_str(), "w");
}

std::string get_level(int level) {
    switch (level)
    {
    case CRITICAL:
        return std::string("CRITICAL");
    case ERROR:
        return std::string("ERROR");
    case WARNING:
        return std::string("WARNING");
    case INFO:
        return std::string("INFO");
    case DEBUG:
    default:
        return std::string("DEBUG");
    }
}

void log_file(int level, const char* format, ...) {
    va_list args;
    if (fp == nullptr) {
        log_create(mod);
    }
    auto now = std::chrono::system_clock::now();
    auto ms = std::chrono::duration_cast<std::chrono::milliseconds>(now.time_since_epoch()) % 1000;
    auto in_time_t = std::chrono::system_clock::to_time_t(now);
    std::tm bt = *std::localtime(&in_time_t);
    std::ostringstream oss;
    oss << std::put_time(&bt, "%Y/%M/%d %H:%M:%S");
    oss << '.' << std::setfill('0') << std::setw(3) << ms.count();
    // Write prefix
    fprintf(fp, "%s [%s] %s: ", oss.str().data(), TAG, get_level(level).data());
    va_start(args, format);
    vfprintf(fp, format, args);
    va_end(args);
    fprintf(fp, "\n");
}

void log_flush() {
    if (fp) {
        fflush(fp);
    }
}

void log_close() {
    if (fp) {
        fclose(fp);
    }
}

#endif