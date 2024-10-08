// Updating values using pointer:
#include <stdio.h>
int main()
{
    int a = 10;
    int *ptr = &a;

    printf("Value of a before updating:%d\n", a);
    *ptr = 20;
    printf("Value of a after updating:%d", a);
    return 0;
}