/* day_mon2.c -- letting the compiler count elements */
#include <stdio.h>
int main(void)
{
    const int days[] = {31,28,31,30,31,30,31,31,30,31};
    int index;
    
    for (index = 0; index < sizeof days / sizeof days[0]; index++)
        printf("Month %2d has %d days.\n", index +1,
               days[index]);
    
    return 0;
}
/* 
如果初始化数组时省略方括号中的数字，编译器会根据初始化列表中的 项数来确定数组的大小。
 */
