#include <stdio.h>
int main()
{
    long int n, rem, rev = 0;

    printf("Enter the number:");
    scanf("%ld", &n);

    for (int i = n; i != 0; i = i / 10)
    {
        rem = i % 10;
        rev = rev * 10 + rem;
    }
    printf("The Reversed Number Is:%ld", rev);

    return 0;
}