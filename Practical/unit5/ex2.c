// How to access values using pointer:
#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;

    ptr = &a;

    printf("Value of a using variable:%d\n", a);
    printf("Value of a using pointer:%d", *ptr);

    return 0;
}