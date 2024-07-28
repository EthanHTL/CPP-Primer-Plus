#include <stdio.h> /*  */

int main(void) /* 一个简单的C程序 */
{
	int num;				  /* 定义一个名为 num 的变量 */
	num = 1;				  /* 为 num 赋一个值 */
	printf("I am a simple "); /* 使用 printf() 函数 */
	printf("computer.\n");
	printf("My favorite number is %d because it is first.\n", num);

	int doors;
	doors = 5;

	getchar(); /* 实现窗口等待用户按下一个键后才关闭 */
	// return 0; /* 可以省略 */
}

/*
stdio.h - C编译器软件包的标准部分，提供了键盘输入和屏幕输出
#include - 是一条C预处理器指令 (preprocessor directive)

return 0 - main函数的返回值可以省略，在运行至最外面的右花括号（}）时会返回0

Tips:
	1.支持变量定义在任意位置，但必须是使用之前
	2.变量命名规则，可以用小写字母、大写字母、数字和下划线（_）来命名。
		而且，名称 的第1个字符必须是字符或下划线，不能是数字。
 */