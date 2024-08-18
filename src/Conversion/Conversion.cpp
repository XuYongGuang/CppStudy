#include <iostream>
#include "Conversion.h"

class ConversionEntity
{
    int a;
    char* b;

public:
    ConversionEntity(int a) : a(a)
    {
    }

    // 转换构造函数, explicit修饰后, 只能显式转换
    explicit ConversionEntity(char* b) : b(b)
    {
    }
};


void ConversionTest()
{
    std::cout << "ConversionTest" << std::endl;
    ConversionEntity entity1 = 1;
    char* b = "xxx";
    // ConversionEntity entity2 = b; // 报错，无法隐式转换,因为没有隐式转换构造函数
}