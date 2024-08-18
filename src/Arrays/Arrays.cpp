#include "Arrays.h"
#include <stdio.h>

void ArraysTest() {
    printf("ArraysTest \n");
    int arr[5] = { 1,2,3,4,5 };
    for (int i = 0; i < 5; i++) {
        printf("arr[%d] = %d \n", i, arr[i]);
    }

    int* arr_ptr = arr; // arr_ptr is a pointer to the first element of arr
    arr_ptr[2] = 111; // change the value of the third element of arr
    printf("arr[2] = %d \n", arr[2]);
    *(arr_ptr + 2) = 999; // 相当于 arr[2] = 999;
    printf("arr[2] = %d \n", arr[2]);
    *(int*)((char*)arr_ptr + 8) = 100; // 相当于 arr[2] = 100, 因为 arr_ptr 指向的是 arr 的第一个元素，所以要加上偏移量 8, 因为 int 类型的大小是 4 字节,而 char 类型的大小是 1 字节
    printf("arr[3] = %d \n", arr[2]);
}