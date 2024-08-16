#include "Static.h"
#include <stdio.h>

// static 分2种，一种是类内static，一种是类外static
// 类内static：修饰的符号是这个类的所有对象共享的，所有的实例共用，只有一个。在link阶段是全局的，可以被其他文件使用
// 类外static：修饰的符号在link阶段是局部的，只能在当前文件中使用，不能在其他文件中使用,在其他cpp中即使使用extend，也不能访问到

struct Entity
{
    static int x, y;
    // static void Print(); // 静态函数
    // 可以在类里面定义静态函数，也可以在类外定义静态函数：
    static void Print()
    {
        printf("x = %d, y = %d \n", x, y);
    }
};

// void Entity::Print()
// {
//     printf("x = %d, y = %d \n", x, y);
// }

// 静态变量必须在类外声明，否则会报错
int Entity::y;
int Entity::x;

void LocalStaticTest()
{
    static int s_var = 10;
    s_var++;
    printf("s_var = %d \n", s_var);
}

// 单例
class Singleton
{
public:
    static Singleton& GetInstance()
    {
        static Singleton instance;
        return instance;
    }

    void Print(){
        printf("Singleton Print \n");
    }
};

void StaticTest()
{
    s_var = 10;
    printf("s_var = %d \n", s_var);

    Entity::x = 10;
    Entity::y = 20;
    Entity::Print();

    LocalStaticTest();
    LocalStaticTest();

    Singleton::GetInstance().Print();
}