#include <iostream>
#include "New.h"

class NewClass
{
    int m_int;

public:
    NewClass()
    {
        std::cout << "NewClass Constructor" << std::endl;
    }
};

void NewTest()
{
    std::cout << "NewTest" << std::endl;

    int* intPtr = new int[50]; // 4*50 = 200 bytes

    // 使用new 分配内存,会调用构造函数
    NewClass* newClassPtr = new NewClass[10];
    // newClassPtr分配的内存大小
    std::cout << "newClassPtr size = " << sizeof(NewClass) * 10 << std::endl; // 4 * 10 = 40 bytes

    // C的方式申请内存，不会调用构造函数
    NewClass* newClassPtr2 = (NewClass*)malloc(sizeof(NewClass) * 10);

    delete[] intPtr;
    delete[] newClassPtr;
    free(newClassPtr2);
}


