#include "String.h"
#include <stdio.h>
#include <string> // std字符串函数库

void NoCopyString(const std::string& str)
{
    printf("no copy: str = %s \n", str.c_str());
}

void StringTest(){
    printf("String Test \n");

    const char* Name = "Hello World"; // 字符串常量,在编译期就确定了，存储在常量区
    // Name[2] = '*'; // 会报错，因为字符串是常量
    printf("Name = %s \n", Name);

    char NameError[] = "Hello World";
    NameError[2] = '*'; // 不会报错，因为字符串是数组,是错误用法
    printf("NameError = %s \n", NameError);

    char Name2[10] = {'H', 'e', 'l', 'l', 0, 'o'};
    Name2[2] = '*';
    printf("Name2 = %s \n", Name2); // 会输出 He*l, 因为遇到'\0'(等于0)就结束了


    std::string Name3 = std::string("Std ") + "Hello World";
    printf("Name3 = %s \n", Name3.c_str());
    int posL = Name3.find('l');
    printf("posL = %d \n", posL);
    NoCopyString(Name3);

    // 其他类型字符串：
    const wchar_t* Name4 = L"Hello World"; // 宽字符常量,大小取决于编译器，2字节或4字节
    const char16_t* Name5 = u"Hello World"; // 16位字符常量,2字节
    const char32_t* Name6 = U"Hello World";//  32位字符常量,4字节

    // 常量字符拼接，利用std
    using namespace std::literals;
    std::string Name7 = "Hello "s + "World";
    printf("Name7 = %s \n", Name7.c_str());

}