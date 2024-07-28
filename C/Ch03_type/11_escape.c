/* escape.c -- 使用转移序列 */
#include <stdio.h>

int main(void)
{
    float salary;

    printf("\aEnter your desired monthly salary:"); /* 1 */  // 发出一声警报（因为使用了\a）

    printf(" $_______\b\b\b\b\b\b\b"); /* 2 */

    scanf("%f", &salary);

    printf("\n\t$%.2f　a　month　is　$%.2f　a　year.", salary, salary * 12.0); /* 3 */

    printf("\rGee!\n"); /* 4 */

    return 0;
}

/* 
第1条printf()语句（注释中标为1）发出一声警报（因为使用了\a），然 后打印下面的内容：

Enter your desired monthly salary:

因为printf()中的字符串末尾没有\n，所以光标停留在冒号后面。

第2条printf()语句在光标处接着打印，屏幕上显示的内容是：

Enter your desired monthly salary: $_______

冒号和美元符号之间有一个空格，这是因为第2条printf()语句中的字符 串以一个空格开始。
7个退格字符使得光标左移7个位置，即把光标移至7个 下划线字符的前面，紧跟在美元符号后面。
通常，退格不会擦除退回所经过 的字符，但有些实现是擦除的，这和本例不同。

假设键入的数据是4000.00（并按下Enter键），屏幕显示的内容应该 是：

Enter your desired monthly salary: $4000.00

键入的字符替换了下划线字符。按下Enter键后，光标移至下一行的起 始处。

第3条printf()语句中的字符串以\n\t开始。换行字符使光标移至下一行起 始处。水平制表符使光标移至该行的下一个制表点，一般是第9列（但不一 定）。然后打印字符串中的其他内容。执行完该语句后，此时屏幕显示的内 容应该是：

162 Enter　your　desired　monthly　salary:　$4000.00 $4000.00　a　month　is　$48000.00　a　year. 因为这条printf()语句中没有使用换行字符，所以光标停留在最后的点号 后面。

第4条printf()语句以\r开始。这使得光标回到当前行的起始处。然后打印 Gee!，接着\n使光标移至下一行的起始处。屏幕最后显示的内容应该是：

Enter　your　desired　monthly　salary:　$4000.00 Gee!　$4000.00　a　month　is　$48000.00　a　year.
 */