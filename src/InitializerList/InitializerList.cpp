#include "InitializerList.h"
#include <iostream>

class Example1
{
public:
    Example1(){
        std::cout << "Example1 Constructor called" << std::endl;
    }
};

class Example2
{
public:
    Example2(){
        std::cout << "Example2 Constructor called" << std::endl;
    }
};

class EntityTest
{
private:
    std::string m_Name;
    Example1 m_Example1;
    Example2 m_Example2;

public:
    EntityTest()
        : m_Name("xxxx")
       , m_Example1() // 这里构造，只会构造1次
    {
        m_Example2 = Example2(); // 这里构造，会导致Example2构造2次

    }
};

void InitializerListTest()
{
    std::cout << "InitializerListTest" << std::endl;
    EntityTest e;
}


