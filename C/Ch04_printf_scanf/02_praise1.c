/* praise1.c -- 使用不同类型的字符串 */
#include <stdio.h>

#define PRAISE "You are an extraordinary being."

int main(void)
{
	char name[40];  
	printf("What's your name?");
	scanf("%s", name);		// scanf()只读取了Angela Plains中的Angela，它在遇 到第1个空白（空格、制表符或换行符）时就不再读取输入。
	printf("Hello, %s. %s\n", name, PRAISE);
	return 0;
}

/* 
输出结果：
What's your name? Angela Plains 
Hello, Angela.You are an extraordinary being.
 */