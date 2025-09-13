# Makefile for Rectangle Area Calculator

# 编译器设置
CC = gcc
CFLAGS = -Wall -Iincludes
TARGET = build/rectangle_app

# 源文件列表
SRCS = src/main.c src/rectangle.c
OBJS = $(SRCS:.c=.o)

# 默认目标：编译项目
all: create_build $(TARGET)

# 创建构建目录
create_build:
	@mkdir -p build

# 链接目标文件生成可执行程序
$(TARGET): $(OBJS)
	$(CC) $(OBJS) -o $(TARGET)
	@echo "构建成功: $(TARGET)"

# 编译源文件生成目标文件
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# 运行程序
run: all
	@echo "运行程序..."
	./$(TARGET)

# 清理构建文件
clean:
	rm -f $(OBJS) $(TARGET)
	@echo "已清理构建文件"

# 重新构建：先清理再编译
rebuild: clean all

# 伪目标声明
.PHONY: all create_build run clean rebuild