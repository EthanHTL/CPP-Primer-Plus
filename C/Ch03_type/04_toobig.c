/* toobig.c -- 超出系统允许的最大 int 值 */
#include <stdio.h>
int main(void)
{
	int i = 2147483647; // 2^31 -> 2147483648  
	unsigned int j = 4294967295; // 2^32 -> 4294967296
	printf("%d %d %d\n", i, i + 1, i + 2);
	printf("%u %u %u\n", j, j + 1, j + 2);

	// 2^63 = 9223372036854775808
	long l = 9223372036854775807;  // long 8B 
	printf("%ld %ld %ld\n", l, l + 1, l + 2);
	long long ll = 9223372036854775807;  // long long 8B
	printf("%lld %lld %lld\n", ll, ll + 1, ll + 2);
	double d = 9223372036854775807;  // long long 8B
	printf("%f %f %f\n", d, d + 1, d + 2);


	return 0;
}