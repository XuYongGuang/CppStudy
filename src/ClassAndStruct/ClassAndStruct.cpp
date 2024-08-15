#include "ClassAndStruct.h"
#include <stdio.h>

void ClassAndStructTest()
{
    PlayerClass playerclass;
    // playerclass.x = 10; //编译错误，因为x是私有的,如果playerclass是Struct，则可以访问,因为Struct是Public的
    playerclass.Move(10, 10);
}

void PlayerClass::Move(int xa, int ya)
{
    x += xa;
    y += ya;
    printf("x = %d, y = %d\n");
}