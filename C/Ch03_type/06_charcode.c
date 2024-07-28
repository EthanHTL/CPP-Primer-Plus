/* charcode.c -- 显示字符的代码编号 */
#include <stdio.h>
int main(void)
{
	char ch;
	printf("Please enter a character.\n");
	scanf("%c", &ch);	/* 用户输入字符 */
	printf("The code for %c is %d.\n", ch, ch);
	return 0;
}
/* 
char类型用于储存字符（如，字母或标点符号），
但是从技术层面看， char是整数类型。因为char类型实际上储存的是整数而不是字符。
 */