// sum_arr1.c -- sums the elements of an array
// use %u or %lu if %zd doesn't work  如果编译器不支持 %zd，用 %u 或 %lu 替换它
#include <stdio.h>
#define SIZE 10
int sum(int ar[], int n);
int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20};
    long answer;

    answer = sum(marbles, SIZE);
    printf("The total number of marbles is %ld.\n", answer);
    printf("The size of marbles is %zd bytes.\n", sizeof marbles);

    return 0;
}

/*
下面4种原型都是等价的：

int sum(int *ar, int n);

int sum(int *, int);

int　sum(int　ar[],　int　n);

int　sum(int　[],　int);
 */
int sum(int ar[], int n) // how big an array?
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    printf("The size of ar is %zd bytes.\n", sizeof ar);

    return total;
}
