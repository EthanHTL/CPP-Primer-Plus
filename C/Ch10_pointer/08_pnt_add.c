// pnt_add.c -- pointer addition 指针地址
#include <stdio.h>
#define SIZE 4
int main(void)
{
    short dates[SIZE];
    short *pti;
    short index;
    double bills[SIZE];
    double *ptf;

    pti = dates; // assign address of array to pointer  把数组地址赋给指针
    ptf = bills;
    printf("dates:%p %p\n", dates, bills); // 数组名是该数组首元素的地址
    printf("%23s %15s\n", "short", "double");
    for (index = 0; index < SIZE; index++)
        printf("pointers + %d: %10p %10p\n",
               index, pti + index, ptf + index);

    /* 
    dates + 2 == &date[2]　　　 // 相同的地址 
    *(dates + 2) == dates[2]　 // 相同的值
    */

    return 0;
}
/* 
我们的系统中，地址按字节编址，short类型占用2字节，double类型占 用8字节。
在C中，指针加1指的是增加一个存储单元。
对数组而言，这意味 着把加1后的地址是下一个元素的地址，而不是下一个字节的地址


dates == &dates[0]; // 数组名是该数组首元素的地址

 */