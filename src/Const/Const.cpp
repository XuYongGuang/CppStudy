#include "Const.h"
#include <stdio.h>

class Entity
{
private:
    int x,z;
    int* y;

    mutable int m_Value;

public:
    int GetX() const 
    { 
        // x = 2; // 报错, 不能在const函数中修改成员变量的值

        m_Value = 2; // 可以修改被mutable修饰的变量的值

        return x; 
    }

    const int& GetX() // 返回一个指向常量的常量引用，该对象不能修改
    {
        return x;
    }

    // 返回一个指向常量的常量指针，什么都不能修改
    const int* const GetY() const 
    { 
        // *y = 2; // 报错, 不能在const函数中修改成员变量的值
        return y; 
    }

    int GetZ()
    {
        return z;
    }
};

void Func1(const Entity& entity)
{
    entity.GetX();
    // entity.GetZ();// 报错，const对象不能调用非const函数，因为不能保证GetZ函数里会不会修改值。
}

void Func2(const Entity* const entity)
{
    // entity = nullptr; // 报错，const指针不能修改指向的值
    // entity->GetZ(); // 报错，const指针不能调用非const函数，因为不能保证GetZ函数里会不会修改值。
}

void Func3(Entity& entity)
{
    const int& a = entity.GetX();
    // a = 2;// 报错, 不能修改const引用的值
}

void ConstTest()
{
    printf("ConstTest! \n");

    const int a = 10;
    // a = 2;// 报错, 不能修改const变量的值

    const int* b = (int*)&a; // 可以修改const变量的值
    // *value = 2; // 报错, 不能修改const指针指向的值

    int* const c = (int*)&a;
    // c = (int*)&a; // 报错, 不能修改c的指向

    const int* const d = (int*)&a; // 指针的指向，和指向的值都不能修改

    int x = 10;
    auto func = [=]() mutable
    { 
        x++; // 不加mutable会报错, 不能修改lambda表达式中的变量的值,需要加mutable关键字
    };
    func();
    printf("x = %d \n", x); // 10, 因为lambda表达式中的x是一个新的变量，和外面的x不是同一个变量,拷贝传递的
}