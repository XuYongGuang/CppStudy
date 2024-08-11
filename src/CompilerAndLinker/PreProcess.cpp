#include "PreProcess.h"

void Test() {
    printf("CompilerAndLinker Test!\n");
#include "EndBrace.h" //这里会被替换成头文件的"}"，可以编译通过