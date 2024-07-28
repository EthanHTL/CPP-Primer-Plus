/* print1.c - 演示 printf() 的一些特性 */
#include <stdio.h>
int main(void)
{
	int ten = 10;
	int two = 2;
	printf("Doing it right: ");
	printf("%d minus %d is %d\n", ten, 2, ten - two);
	printf("Doing it wrong: ");
	printf("%d minus %d is %d\n", ten);	// 遗漏 2 个参数
	return 0;
}
/* 
在第二行输出中，第1个%d 对应ten的值，但是由于没有给后两个%d提供任何值，所以打印出的值是内 存中的任意值
 */