/* showf_pt.c -- 以两种方式显示 float 类型的值 */
#include <stdio.h>
int main(void)
{
	float aboat = 32000.0;
	double abet = 2.14e9;
	long double dip = 5.32e-5;
	printf("%f can be written %e\n", aboat, aboat);
	// 下一行要求编译器支持 C99 或其中的相关特性
	printf("And it's %a in hexadecimal, powers of 2 notation\n", aboat);  
	// 输出  
	printf("%f can be written %e\n", abet, abet);
	printf("%Lf can be written %Le\n", dip, dip);



	float toobig = 3.4E38 * 100.0f;
	printf("%e\n", toobig);

	return 0;
}

/* 
使用%f转换说明打印十进制记数法的float和double类型浮点 数，用%e打印指数记数法的浮点数

如果系统支持十六进制格式的浮点 数，可用a和A分别代替e和E。打印long double类型要使用%Lf、%Le或%La 转换说明。

C99 标准添加了一种新的浮点型常量格式——用十六进制表示浮点型常 量，即在十六进制数前加上十六进制前缀（0x或0X），用p和P分别代替e和 E，用2的幂代替10的幂（即，p计数法）
如 0xa.1fp10 =》 十六进制a等于十进制10，.1f是1/16加上15/256（十六进制f等于十进制15），p10是210 或1024。0xa.1fp10表示的值是(10 15/256)×1024（即，十进制10364.0）

 */