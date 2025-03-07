/* stringf.c -- 字符串格式 */
#include <stdio.h>

#define BLURB "Authentic imitation!"

int main(void)
{
	printf("[%2s]\n", BLURB);
	printf("[%24s]\n", BLURB);
	printf("[%24.5s]\n", BLURB);
	printf("[%-24.5s]\n", BLURB);
	return 0;
}
/* 
输出结果：
[Authentic imitation!]       
[    Authentic imitation!]
[                   Authe]   
[Authe                   ]

第1个转换说明是%2s，但是字段被扩大为可容纳字符串中 的所有字符。
精度限制了待打印字符的个数  .5告诉printf()只打 印5个字符。另外，-标记使得文本左对齐输出。
 */