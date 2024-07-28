/* bases.c -- 以十进制、八进制、十六进制打印十进制数 100 */
#include <stdio.h>
int main(void)
{
	int x = 100;
	printf("dec = %d; octal = %o; hex = %x\n", x, x, x);
	printf("dec = %d; octal = %#o; hex = %#x\n", x, x, x);
	return 0;
}

/* 
以十进制显示数字，使用%d；以八进制显示数字，使用%o； 以十六进制显示数字，使用%x。
另外，要显示各进制数的前缀0、0x和0X， 必须分别使用%#o、%#x、%#X
*/