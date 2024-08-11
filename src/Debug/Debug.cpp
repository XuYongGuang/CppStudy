#include <stdio.h>

void DebugTest()
{
    printf("Debug Test!\n");
    int a = 15; // &a：可以在调试内存窗口中输入，看到内存中的值。
    a++;
    const char* String = "Hello";
    for (int i = 0; i < 5; i++)
    {
        const char c = String[i];
        printf("%c\n", c);
    }
}