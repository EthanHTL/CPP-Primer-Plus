/* intconv.c -- 一些不匹配的整型转换 */
#include <stdio.h>

#define PAGES 336
#define WORDS 65618

int main(void)
{
	short num = PAGES;
	short mnum = -PAGES;
	printf("num as short and unsigned short: %hd %hu\n", num, num);
	printf("-num as short and unsigned short: %hd %hu\n", mnum, mnum);
	printf("num as int and char: %d %c\n", num, num);
	printf("WORDS as int, short, and char: %d %hd %c\n", WORDS, WORDS, WORDS);
	return 0;
}

/* 
num as short and unsigned short: 336 336
-num as short and unsigned short: -336 65200
num as int and char: 336 P
WORDS as int, short, and char: 65618 82 R

第1行，num变量对应的转换说明%hd和%hu输出的结果都是 336。这没有任何问题。
第2行mnum变量对应的转换说明%u（无符 号）输出的结果却为65200，并非期望的336。

 */