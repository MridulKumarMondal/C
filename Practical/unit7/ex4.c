// Declaring function bellow main
#include <stdio.h>
int sum(int, int);
int main()
{
    int a = 10, b = 20;

    int r = sum(a, b);

    printf("%d", r);

    return 0;
}
int sum(int x, int y)
{
    return x + y;
}