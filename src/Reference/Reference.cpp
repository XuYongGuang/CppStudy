#include "Reference.h"
#include <stdio.h>

void testPointer(int* p)
{
    // 指针指向的值加1
    (*p)++;
    printf("*p = %d \n", *p);

    // 指针加1，跳过一个int类型占用的内存，因为++运算符的优先级比*高
    *p++;
    printf("*p = %d \n", *p);

    // 指针加1，跳过一个int类型占用的内存
    p++;
    printf("*p = %d \n", *p);
}

void testReference(int& r)
{
    // 引用加1, 相当于a++
    r++;
    printf("r = %d \n", r);

    int b = 100;
    r = b; // 改变的是a的值，而不是改变r的引用
    printf("r = %d \n", r);
}


void ReferenceTest()
{
    int a = 10;
    int& aRef = a; //引用不占用内存，编译后不会有aRef变量
    int* b = &a; // 指针占用内存，编译后会生成b变量
    printf("a = %d, aRef = %d, b = %d,  \n", a, aRef, b);

    testPointer(&a);
    testReference(a);
}
