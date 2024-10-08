// Array of pointers:
#include <stdio.h>
int main()
{
    int a, b;

    printf("Enter the values:");
    scanf("%d %d", &a, &b);

    int *ar[2];

    ar[0] = &a;
    ar[1] = &b;

    printf("The values are:");
    for (int i = 0; i < 2; i++)
    {
        printf("%d ", *ar[i]);
    }

    return 0;
}