/* size.c -- 打印类型大小 */
#include <stdio.h>
#include <inttypes.h>	// 支持可移植类型

int main(void)
{
	/* C99 为类型大小提供 %zd 转换说明 */
	printf(" char : %zd bytes.\n", sizeof(char));

	size_t si = sizeof(int); /* C99 和C11提供%zd转换说明匹配sizeof的返回类型(size_t)  一些不支持C99和C11的 编译器可用%u或%lu代替%zd。*/
	printf(" int : %zd bytes.\n", si);
	
	printf(" short : %zd bytes.\n", sizeof(short));

	printf(" short int : %zd bytes.\n", sizeof(short int));
	
	printf(" long : %zd bytes.\n", sizeof(long)); /* 有的是4 我的是8 */
	
	printf(" long long : %zd bytes.\n", sizeof(long long));

	printf(" long int : %zd bytes.\n", sizeof(long int));

	printf(" long long int : %zd bytes.\n", sizeof(long long int));
	
	printf(" float : %zd bytes.\n", sizeof(float));

	printf(" double : %zd bytes.\n", sizeof(double));
	
	printf(" long double : %zd bytes.\n", sizeof(long double));

	printf(" _Bool : %zd bytes.\n", sizeof(_Bool));

	// 可移植类型
	printf("int32_t : %zd bytes.\n", sizeof(int32_t));
	printf("int16_t : %zd bytes.\n", sizeof(int16_t));
	return 0;
}

/* 
bit - 比特位
byte - 1字节 = 8bit
kb - 1024byte
mb - 1024kb
 */