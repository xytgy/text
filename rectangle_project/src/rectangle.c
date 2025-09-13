#include <stdio.h>
#include "rectangle.h" // 包含自己的头文件，编译器需要找到它

// 计算面积的函数定义
double calculate_area(double length, double width) {
    return length * width;
}

// 打印面积的函数定义
void print_area(double length, double width) {
    double area = calculate_area(length, width);
    printf("The area of the rectangle (%.2f x %.2f) is %.2f\n", length, width, area);
}