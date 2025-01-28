# pcolor.h

一个简单易用的C/C++控制台彩色文本输出库。支持在C和C++项目中使用，提供多种颜色输出方式和实用功能。

## 功能特点

- 支持C和C++两种语言
- 多种颜色输出方式
- 简单的API设计
- 跨平台支持(Windows/Unix)
- 包含清屏功能

## 使用方法

### 1. 安装

只需要将`pcolor.h`头文件添加到你的项目中即可。

### 2. 可用颜色

支持以下颜色：
- RED (红色)
- GREEN (绿色)
- YELLOW (黄色)
- BLUE (蓝色)
- MAGENTA (品红)
- CYAN (青色)
- WHITE (白色)
- RESET (恢复默认颜色)

### 3. 演示示例

#### C++示例
```cpp
#include "pcolor.h"

int main() {
    // 方式1：使用流操作符
    std::cout << RED << "这是红色文本" << RESET << std::endl;
    std::cout << BLUE << "这是蓝色文本" << RESET << std::endl;
    
    // 方式2：使用pcolor函数
    pcolor(GREEN);
    std::cout << "这是绿色文本" << std::endl;
    pcolor(RESET);
    
    // 在同一行使用多种颜色
    std::cout << RED << "红色 " << GREEN << "绿色 " 
              << BLUE << "蓝色" << RESET << std::endl;
    
    // 清屏演示
    std::cout << "按回车键清屏..." << std::endl;
    std::cin.get();
    clear();
    
    return 0;
}
```

#### C语言示例
```c
#include "pcolor.h"

int main() {
    // 方式1：使用宏定义
    printf(COLOR_RED "这是红色文本\n" COLOR_RESET);
    printf(COLOR_BLUE "这是蓝色文本\n" COLOR_RESET);
    
    // 方式2：使用pcolor函数
    pcolor(GREEN);
    printf("这是绿色文本\n");
    pcolor(RESET);
    
    // 方式3：使用print_color函数
    print_color(YELLOW, "这是黄色文本\n");
    
    // 清屏演示
    printf("按回车键清屏...\n");
    getchar();
    clear();
    
    return 0;
}
```

## API说明

### 宏定义
```c
COLOR_RED     // 红色文本
COLOR_GREEN   // 绿色文本
COLOR_YELLOW  // 黄色文本
COLOR_BLUE    // 蓝色文本
COLOR_MAGENTA // 品红文本
COLOR_CYAN    // 青色文本
COLOR_WHITE   // 白色文本
COLOR_RESET   // 重置颜色
```

### 函数说明

```c
void pcolor(Color color);              // 设置后续文本的颜色
void clear(void);                      // 清屏
void print_color(Color color, const char* text);  // 打印彩色文本
```

### C++特有功能

```cpp
std::ostream& operator<<(std::ostream& os, const Color& color);  // 流操作符重载
```

## 注意事项

1. 使用`pcolor()`后记得使用`pcolor(RESET)`重置颜色
2. Windows系统可能需要额外配置才能显示ANSI颜色
3. 编译时确保包含了正确的头文件路径
