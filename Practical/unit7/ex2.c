// Passing arguments
#include <stdio.h>
void sum(int x, int y)
{
    int sum = 0;

    sum = x + y;

    printf("%d", sum);
}
int main()
{
    int a = 70, b = 20;

    sum(a, b);

    return 0;
}