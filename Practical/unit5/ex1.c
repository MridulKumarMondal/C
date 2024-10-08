// How to declare pointers:
#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr;

    ptr = &a; // Assigning value

    printf("Address of a using pointer:%d\n", ptr);
    printf("Address of a using its own variable:%d", &a);

    return 0;
}