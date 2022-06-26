#ifndef UTIL
#define UTIL

#if defined(__linux__) || defined(__unix__)
#define LINUX
#endif

#if defined(_WIN32) || defined(_WIN64)
#define WINDOWS
#endif

#define MAX_OS        2

enum OS_TYPES {
    NONE_SPECIFIED = 0x0,
    T_LINUX = 0xB01,
    T_WINDOWS = 0xB02,
    T_LINUX_ONLY = 0xA01,
    T_WINDOWS_ONLY = 0xA02,
    T_WINDOWS_AND_LINUX = 0xA03
};

#endif