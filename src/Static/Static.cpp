#include "Static.h"
#include <stdio.h>


// static 分2种，一种是类内static，一种是类外static
// 类内static：修饰的符号是这个类的所有对象共享的，所有的实例共用，只有一个。在link阶段是全局的，可以被其他文件使用
// 类外static：修饰的符号在link阶段是局部的，只能在当前文件中使用，不能在其他文件中使用

//在其他cpp中即使使用extend，也不能访问到

void StaticTest()
{   
    s_var = 10; 
    printf("s_var = %d \n", s_var);
}