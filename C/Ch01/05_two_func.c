// two_func.c —— 一个文件中包含两个函数
#include <stdio.h>

void butler(void);	/* ANSI/ISO C 函数原型(prototype)  */

int main(void) 
{
	printf("I will summon the butler function.\n");
	butler(); /* 函数调用(function call) */
	printf("Yes. Bring me some tea and writeable DVDs.\n");
	return 0;
}

void butler(void)	/* 函数定义(function definition) - 两个void表示 无参数，无返回值 */
{
	printf("You rang, sir?\n");
}