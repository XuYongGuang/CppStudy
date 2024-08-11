#include <stdio.h>

void LinkerFunc2()
{
    printf("LinkerFunc2!\n");
}

int LinkerFunc2(int a)
{
    printf("LinkerFunc2(int a)!\n");
    return a;
}