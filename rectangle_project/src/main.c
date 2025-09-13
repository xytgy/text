#include <stdio.h>
#include "rectangle.h" // 包含自定义头文件，编译器需要找到它

int main() {
    double l = 5.0;
    double w = 3.0;

    // 使用在 rectangle.c 中定义的函数
    print_area(l, w);

    return 0;
}