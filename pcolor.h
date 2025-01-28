#ifndef COLOR_H
#define COLOR_H

#ifdef __cplusplus
#include <iostream>
#endif
#include <stdio.h>
#include <stdlib.h>

// 颜色代码宏定义
#define COLOR_RED     "\033[31m"
#define COLOR_GREEN   "\033[32m"
#define COLOR_YELLOW  "\033[33m"
#define COLOR_BLUE    "\033[34m"
#define COLOR_MAGENTA "\033[35m"
#define COLOR_CYAN    "\033[36m"
#define COLOR_WHITE   "\033[37m"
#define COLOR_RESET   "\033[0m"

#ifdef __cplusplus
extern "C" {
#endif

// 颜色枚举，两种语言通用
typedef enum {
    RED = 31,
    GREEN = 32,
    YELLOW = 33,
    BLUE = 34,
    MAGENTA = 35,
    CYAN = 36,
    WHITE = 37,
    RESET = 0
} Color;

// 设置文本颜色
static inline void pcolor(Color color) {
    printf("\033[%dm", color);
}

// 清屏函数
static inline void clear(void) {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

// 直接打印彩色文本的函数
static inline void print_color(Color color, const char* text) {
    printf("\033[%dm%s\033[0m", color, text);
}

#ifdef __cplusplus
}  // extern "C"

// C++特有的运算符重载
inline std::ostream& operator<<(std::ostream& os, const Color& color) {
    return os << "\033[" << static_cast<int>(color) << "m";
}
#endif

#endif // COLOR_H