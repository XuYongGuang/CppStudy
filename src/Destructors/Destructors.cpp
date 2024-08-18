#include "Destructors.h"
#include <stdio.h>

class Entity
{
public:
    float x,y;

    Entity() {
        printf("Entity created \n");
    }

    // 析构函数
    ~Entity() {
        printf("Entity destroyed \n");
    }

    void Print() {
        printf("x: %f, y: %f \n", x, y);
    }
};


// Entity, 栈上的实例, 会在函数返回时自动销毁

void TestFunc() {
    Entity e;
    e.Print();
    e.~Entity(); // 手动调用析构函数,如果有释放内存操作，会导致释放2次内存，闪退。
}

void DestructorsTest() {
    printf("DestructorsTest \n");

    TestFunc();
}