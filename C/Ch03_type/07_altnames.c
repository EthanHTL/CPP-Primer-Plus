/* altnames.c -- 可移植整数类型名 */
#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>	// 支持可移植类型

int main(void)
{
	int32_t me32;	// me32 是一个 32 为有符号整型变量
	me32 = 45933945;
	printf("First, assume int32_t is int: ");
	printf("me32 = %d\n", me32);
	printf("Next, let's not make any assumptions.\n");
	printf("Instead, use a \"macro\" from inttypes.h: ");
	printf("me32 = %" PRId32 "\n", me32); // inttypes.h头文件中定义了PRId32字符串宏，代表打印32位有符号值的合 适转换说明（如d或l）

	
	printf("int32_t : %zd bytes.\n", sizeof(int32_t));
	printf("int16_t : %zd bytes.\n", sizeof(int16_t));
	printf("int_least8_t : %zd bytes.\n", sizeof(int_least8_t));
	printf("int_fast8_t : %zd bytes.\n", sizeof(int_fast8_t));
}
/* 
C99 新增了两个头文件stdint.h和inttypes.h，以确保C语言的类 型在各系统中的功能相同。

C语言为现有类型创建了更多类型名。这些新的类型名定义在stdint.h头 文件中。

例如，int32_t表示32位的有符号整数类型。在使用32位int的系统 中，头文件会把int32_t作为int的别名。

不同的系统也可以定义相同的类型 名。

例如，int为16位、long为32位的系统会把int32_t作为long的别名。然后，使用int32_t类型编写程序，并包含stdint.h头文件时，编译器会把int或 long替换成与当前系统匹配的类型。

上面讨论的类型别名是精确宽度整数类型（exact-width integer type）的

示例。int32_t表示整数类型的宽度正好是32位。但是，计算机的底层系统可 能不支持。因此，精确宽度整数类型是可选项。
 */