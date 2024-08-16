#include "Enum.h"
#include <cstdio>

// Enum, 枚举类型, 枚举类型的变量只能是枚举类型的枚举值,本质是一个整数类型
enum EnumType : unsigned char // 继承unsigned char，可以节省内存
{
    EnumType1,
    EnumType2 = 100,
    EnumType3,
};

class EnumTestClass
{
public:
    void EnumTest(EnumType type){
        if (type == EnumType2){
            printf("type equal to EnumType2 \n");
        }
        else{
            printf("type not equal to EnumType2 \n");
        }
    }
};

void EnumTest(){
    printf("EnumTest \n");

    printf("EnumType1 = %d \n", EnumType1);
    printf("EnumType2 = %d \n", EnumType2);
    printf("EnumType3 = %d \n", EnumType3);

    EnumTestClass enumTestClass;
    enumTestClass.EnumTest(EnumType2);
}