// Pass By Referance
#include <stdio.h>
int swap(int *x, int *y)
{
    int temp = *x; // Updating Value Using Indirection Operator
    *x = *y;
    *y = temp;
}

int main()
{
    int a = 10, b = 20;
    printf("Before Swap:%d %d\n", a, b);
    swap(&a, &b);
    printf("After Swap:%d %d", a, b);
    return 0;
}