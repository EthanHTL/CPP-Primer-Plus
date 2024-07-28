#include <stdio.h>

int main(void)
{
    printf("Concrete contains gravel and cement.\n");

    return 0;
}

/*

编译器&连接器
    concrete.c 
    -> 编译器 -> 目标代码(concrete.obj) 
    -> 连接器 -> 连接(库代码&启动代码) 
    -> 生成可执行代码 -> concrete.exe

cc & gcc & Clang
    1.gcc是GNU项目中的产品之一
    2.许多使用gcc的系统都用cc作 为gcc的别名

C99标准 & C11标准

GCC最新版本：https://www.gnu.org/software/gcc/index.html

Tips:
    1.省略标准头文件，可能不会影响程序，但最后不要这么做
*/
