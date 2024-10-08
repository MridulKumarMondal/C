// Function with return type and argument
#include <stdio.h>
int sum(int x, int y)
{
    int sum = 0;

    sum = x + y;

    return sum;
}
int main()
{
    int a = 10, b = 20;

    int r = sum(a, b);

    printf("%d", r);
    return 0;
}