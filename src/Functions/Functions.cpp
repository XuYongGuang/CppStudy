#include <stdio.h>
#include "Functions.h"

int Add(int a, int b)
{
    return a + b;

}

void FunctionsTest()
{
    printf("Functions Test!\n");
    int a = 10;
    int b = 20;
    int c = Add(a, b);
    printf("a + b = %d\n", c);

}