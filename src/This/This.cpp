#include <iostream>
#include "This.h"


struct ThisClass
{

    int x, y;

    ThisClass(int x, int y)
    {
        this->x = x;
        this->y = y;
        PrintTestClass(*this);
        // delete this;// 如果外面读该对象内存，会导致闪退
    }

    ThisClass* Get()
    {
        return this;
    }

    ~ThisClass()
    {
        std::cout << "~ThisClass" << std::endl;
    }
};

void PrintTestClass(ThisClass& thisClass)
{
    std::cout << "ThisClass x = " << thisClass.x << " y = " << thisClass.y << std::endl;
}

void ThisTest()
{
    std::cout << "ThisTest" << std::endl;
    ThisClass* thisClass = new ThisClass(1, 2);
    ThisClass* thisClass2 = thisClass->Get();
    delete thisClass;
    // delete thisClass2; // 删除两次，会导致闪退
}