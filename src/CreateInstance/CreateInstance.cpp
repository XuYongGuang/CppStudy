#include <iostream>
#include "CreateInstance.h"

class Instance
{
    int m_var;
public:
    Instance()
    {
        std::cout << "Instance Constructor" << std::endl;
        m_var = 999;
    }

    ~Instance()
    {
        std::cout << "Instance Destructor" << std::endl;
        m_var = 0;
    }

    void print()
    {
        std::cout << "Instance print" << std::endl;
        std::cout << "m_var = " << m_var << std::endl;
    }
};

void CreateInstanceTest() 
{
    std::cout << "CreateInstanceTest" << std::endl;

    Instance* instance;
    {
        Instance instance2; // 栈上分配内存
        instance = &instance2; // instance2 is destroyed here
    }
    if (instance == nullptr) // instance 不是空指针，会指向原先指向 instance2 的内存，但是 instance2 已经被销毁了
    {
        std::cout << "instance is nullptr" << std::endl;
    }

    instance->print(); 

    {
        Instance* instance3 = new Instance(); // 堆上分配内存
        instance = instance3;
    }

    instance->print();
    delete instance; // 释放堆上分配的内存
}