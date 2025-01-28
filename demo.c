#include "pcolor.h"

int main() {
    // 使用宏
    printf(COLOR_RED "红色文本\n" COLOR_RESET);
    
    // 使用pcolor函数
    pcolor(BLUE);
    printf("蓝色文本\n");
    pcolor(RESET);
    
    // 使用print_color函数
    print_color(GREEN, "绿色文本\n");
    
    clear();  // 清屏
    return 0;
}