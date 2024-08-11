#include <limits>
#include <stdio.h>
#include <wchar.h>
#include "Variables.h"

// 不同变量只是内存占用大小不同
void VariablesTest()
{
    printf("Variables Test!\n");

    int intV;
    // printf("intV = %d\n", intV); // 没初始化就用会报错
    intV = 10;
    printf("intV = %d\n", intV);
    printf("int Size: %d\n", sizeof(intV));
    int maxIntValue = std::numeric_limits<int>::max();
    int minIntValue = std::numeric_limits<int>::min();
    printf("int Max : %d\n", maxIntValue);
    printf("int Min : %d\n", minIntValue);
    unsigned int maxUintValue = std::numeric_limits<unsigned int>::max();
    printf("unsigned int Max : %u\n", maxUintValue);

    char charV;
    charV = 'A';
    printf("charV = %c\n", charV); // "A"
    printf("charV = %d\n", charV); // 65
    printf("char Size: %d\n", sizeof(charV));

    float floatV;
    floatV = 10.0f;
    printf("floatV = %f\n", floatV);
    printf("float Size: %d\n", sizeof(floatV));

    double doubleV;
    doubleV = 10.0;
    printf("doubleV = %f\n", doubleV);
    printf("double Size: %d\n", sizeof(doubleV));
}