#pragma once //避免重复包含头文件
// 等同于：
// #ifndef _COMPILERANDLINKER_H_
// #define _COMPILERANDLINKER_H_
// #endif
#include <stdio.h> //尖括号的意思是告诉编译器在系统目录中查找头文件，而不是在当前目录中查找头文件

void CompilerAndLinkerTest();

void LinkerFunc1();

void LinkerFunc2();

int LinkerFunc2(int a);