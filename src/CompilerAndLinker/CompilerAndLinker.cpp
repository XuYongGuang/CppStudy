#include "CompilerAndLinker.h"

#define MY_INT int //自定义类型
void TestLinkerFunc1();

void CompilerAndLinkerTest() {
    printf("CompilerAndLinker Test!\n");

    MY_INT a = 10;
    printf("MY_INT = %d\n", a);

// 预处理分支
#if 1
    printf("Test #if 1\n");
#else
    printf("Test #if 0\n");
#endif

    // LinkerFunc1();  // 这个会链接错误，因为没有定义这个函数
    // TestLinkerFunc1(); // 哪怕这个注释了也会链接错误，因为这个函数中调用了LinkerFunc1()，不能保证其他地方不会调用这个函数，除非改成static

    LinkerFunc2(); 
    LinkerFunc2(2); // 重载版本

#include "EndBrace.h" //这里会被替换成头文件的"}"，可以编译通过


// 重复定义也会链接错误
// void LinkerFunc2() {}

void TestLinkerFunc1() {
    // LinkerFunc1();
}