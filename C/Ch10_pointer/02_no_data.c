/* no_data.c -- uninitialized array 未初始化的数组 */
#include <stdio.h>
#define SIZE 4
int main(void)
{
    int no_data[SIZE];  /* uninitialized array */
    int i;
    
    printf("%2s%14s\n",
           "i", "no_data[i]");
    for (i = 0; i < SIZE; i++)
        printf("%2d%14d\n", i, no_data[i]);
    
    return 0;
}
/* 
使用数组前必须先初始化它。与普通变量类似，在使用数组元素之前， 必须先给它们赋初值。编译器使用的值是内存相应位置上的现有值，因此， 读者运行该程序后的输出会与该示例不同。
 */