#include <iostream>
#include "Pointers.h"

void PointersTest()
{
    std::cout << "Pointers Test!" << std::endl;
    std::cout << "Pointers Just a Int!! which save address!" << std::endl;
    void* nullPtr = 0;// 0 表示空指针, 空指针可以指向任何类型的数据.等同于 NULL和nullptr
    // *nullPtr = 1; // 空指针不能被解引用, 否则会导致程序崩溃.

    int a = 15;
    nullPtr = &a;
    std::cout << "nullPtr: " << nullPtr << std::endl;
    int* intPtr = &a;
    std::cout << "intPtr: " << intPtr << std::endl;
    double* doublePtr = (double*)&a; // 强制类型转换, 将int* 转换为 double*
    std::cout << "doublePtr: " << doublePtr << std::endl;
    //输出结果是-7.29253e-12，因为intPtr指向的地址存储的是一个int类型的数据，而doublePtr指向的地址存储的是一个double类型的数据，所以在进行强制类型转换时，会将intPtr指向的地址中的数据转换为double类型，然后再进行存储。
    std::cout << "*doublePtr: " << *doublePtr << std::endl;    // std::cout << "a: " << a << std::endl;

    // 解引用
    std::cout << "*intPtr: " << *intPtr << std::endl;
    *intPtr = 20;
    std::cout << "a: " << a << std::endl;// 20
    std::cout << "*intPtr: " << *intPtr << std::endl;// 20

    // 动态申请内存, 使用new关键字申请内存, 使用delete关键字释放内存
    char* buffer = new char[10];
    memset(buffer, 0, 10);
    strcpy(buffer, "Hello World");
    std::cout << "buffer: " << buffer << std::endl;
    // 指向指针的指针
    char** charPtrPtr = &buffer;
    std::cout << "charPtrPtr: " << charPtrPtr << std::endl; // 0x7ffee87e7060, 0x7ffee87e7060 是 buffer 的地址
    std::cout << "*charPtrPtr: " << *charPtrPtr << std::endl; // Hello World
    delete[] buffer;
}