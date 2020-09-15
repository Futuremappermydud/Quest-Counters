#pragma once

#include <android/log.h>
#include <pthread.h>
#include <stdio.h>
#include <stdlib.h>
#include <dlfcn.h>
#include <iostream>
#include <unistd.h>
#include <cmath> // Included to support cmath's definition of log
#include <string_view>

namespace Logging {
    enum Level {
        CRITICAL = ANDROID_LOG_FATAL,
        ERROR = ANDROID_LOG_ERROR,
        WARNING = ANDROID_LOG_WARN,
        INFO = ANDROID_LOG_INFO,
        DEBUG = ANDROID_LOG_DEBUG
    };
}

#ifdef log
#undef log
#endif

#ifdef TAG
// If TAG is defined, allow the user to log with that tag with a simple log macro
#define logv(lvl, ...) __android_log_vprint(lvl, TAG, __VA_ARGS__)
#ifndef FILE_LOG
#define log(lvl, ...) __android_log_print(lvl, TAG, __VA_ARGS__)
#else

#ifndef CHARS_PER_ARG
#define CHARS_PER_ARG 50
#endif

#ifndef LOG_PATH_FORMAT
#define LOG_PATH_FORMAT "/sdcard/Android/data/%s/files/logs/"
#endif

std::string get_level(int level);

// Logs with the corresponding level and format string to the log file
void log_file(int level, const char* format, ...);

// Flushes the log file
void log_flush();

// Closes the log file
void log_close();

#define log(lvl, ...) do { __android_log_print(lvl, TAG, __VA_ARGS__); \
log_file(lvl, __VA_ARGS__);} while(0);

#ifndef STD_BUFFER_SIZE
#define STD_BUFFER_SIZE 256
#endif

// From: https://codelab.wordpress.com/2014/11/03/how-to-use-standard-output-streams-for-logging-in-android-apps/
static int pfd[2];
static pthread_t thr;
static void* thread_func(void*) {
    ssize_t rdsz;
    char buf[STD_BUFFER_SIZE];
    while((rdsz = read(pfd[0], buf, sizeof buf - 1)) > 0) {
        if(buf[rdsz - 1] == '\n') --rdsz;
        buf[rdsz] = 0;  /* add null-terminator */
        __android_log_write(ANDROID_LOG_INFO, TAG, buf);
    }
    return 0;
}

extern "C" {
    // Redirects stdout and stderr to the android log stream. Call this once before using stdout/stderr
    // Returns 0 on success, -1 otherwise
    static int start_logger()
    {
        /* make stdout line-buffered and stderr unbuffered */
        setvbuf(stdout, NULL, _IOLBF, 0);
        setvbuf(stderr, NULL, _IONBF, 0);

        /* create the pipe and redirect stdout and stderr */
        pipe(pfd);
        dup2(pfd[1], 1);
        dup2(pfd[1], 2);

        /* spawn the logging thread */
        if(pthread_create(&thr, 0, thread_func, 0) == -1)
            return -1;
        pthread_detach(thr);
        return 0;
    }
}

#endif

#else
// If TAG is not defined, we need to specify a way of getting a logging class, and a way of logging messages
typedef struct ModInfo ModInfo;
class Logger {
    public:
        Logger(const ModInfo info);
        Logger(std::string_view tag_);
        void log(Logging::Level lvl, std::string str) const;
        void log(Logging::Level lvl, std::string_view fmt, ...) const;
        void critical(std::string_view fmt, ...) const;
        void error(std::string_view fmt, ...) const;
        void warning(std::string_view fmt, ...) const;
        void info(std::string_view fmt, ...) const;
        void debug(std::string_view fmt, ...) const;
        // Returns the logger that is used within the utils library. This function should not be used outside of the main library
        static const Logger& get();
    private:
        std::string tag;
};

#endif /* TAG */
