#include "Constructors/Constructors.h"
#include <stdio.h>

class Entity
{
public:
    float x,y;

    Entity() {
        x = 0.0f;
        y = 0.0f;
    }

    // Entity() = delete; // 禁止默认构造函数,下面使用默认构造的实例会报错

    Entity(float x, float y){
        this->x = x;
        this->y = y;
    }

    void Print() {
        printf("x: %f, y: %f \n", x, y);
    }
};

void ConstructorsTest() {
    Entity e;
    e.Print(); // 变量没有初始化，所以打印的是垃圾值
    Entity e2 = Entity();
    e2.Print(); // 变量被默认构造函数初始化，所以打印的是0.0
    Entity e3 = Entity(10.0f, 10.0f);
    e3.Print(); // 变量被自定义的构造函数初始化，所以打印的是10.0
}