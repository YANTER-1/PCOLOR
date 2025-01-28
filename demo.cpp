#include "pcolor.h"

int main() {
    // 使用运算符重载
    std::cout << RED << "红色文本" << RESET << std::endl;
    
    // 使用pcolor函数
    pcolor(BLUE);
    std::cout << "蓝色文本" << std::endl;
    pcolor(RESET);
    
    // 使用print_color函数
    print_color(GREEN, "绿色文本\n");
    
    clear();  // 清屏
    return 0;
}