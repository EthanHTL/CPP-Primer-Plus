/* platinum.c -- your weight in platinum */
#include <stdio.h>

int main(void)
{

	// printf(sizeof(int));

	float weight; /* 你的体重 */
	float value;  /* 相等种类的白金价值 */
	printf("Are you worth your weight in platinum?\n");
	printf("Let's check it out.\n");
	printf("Please enter your weight in pounds: ");
	/* 获取用户的输入 */
	scanf("%f", &weight);
	/* 假设白金的价格是每盎司 $1700 */
	/* 14.5833 用于把英镑常衡盎司转换为金衡盎司 */
	value = 1700.0 * weight * 14.5833;
	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that! If platinum prices drop,\n");
	printf("eat more to maintain your value.\n");
	return 0;
}

/*
关键字：
	最初K&R提供：int 、short、long、unsigned、char、float、double
	C90标准添加：signed、void
	C99标准添加：_Bool、 _Complex、_Imaginary 


在C语言中，用int关键字来表示基本的整数类型。
后3个关键字（long、 short和unsigned）和C90新增的signed用于提供基本整数类型的变式，
例如 unsigned short int和long long int。
char关键字用于指定字母和其他字符（如， #、$、%和*）。
另外，char类型也可以表示较小的整数。float、double和 long double表示带小数点的数。
_Bool类型表示布尔值（true或false）， _complex和_Imaginary分别表示复数和虚数。

 */