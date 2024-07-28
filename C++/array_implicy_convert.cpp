/* C/C++ 中的指针 隐式转换 */
#include <iostream>

#include <type_traits>

template <typename T1, typename T2>
void arr_type(T1 t1, T2 t2)
{
    printf("\narr_type: %d\n", std::is_same<decltype(t1), int *>::value);
    printf("arr_type: %d\n", std::is_same<decltype(t1), int[4]>::value);

    printf("arr_type: %d\n", std::is_same<decltype(t2), int *>::value);
    printf("arr_type: %d\n", std::is_same<decltype(t2), int[4]>::value);
    printf("arr_type: %d\n", std::is_same<decltype(t2), int(*)[4]>::value);
}

int main(void)
{
    int arr[4]; // arr -> &(arr[0])   从输出结果可以进行了隐式转换
    printf("arr(%p) =? &arr(%p)\n", arr, &arr);

    printf("%d\n", std::is_same<decltype(arr), int *>::value);
    printf("%d\n", std::is_same<decltype(arr), int [4]>::value);

    printf("%d\n", std::is_same<decltype(&arr), int *>::value);
    printf("%d\n", std::is_same<decltype(&arr), int [4]>::value);
    printf("%d\n", std::is_same<decltype(&arr), int (*) [4]>::value);

    arr_type(arr, &arr);
    arr_type(&(arr[0]), &arr);

    return 0;
}
/*
输出结果
arr(0xffffe7eb36f8) =? &arr(0xffffe7eb36f8)
0
1
0
0
1

arr_type: 1
arr_type: 0
arr_type: 0
arr_type: 0
arr_type: 1

arr_type: 1
arr_type: 0
arr_type: 0
arr_type: 0
arr_type: 1
 */