// Reverse a array
#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size:");
    scanf("%d", &n);

    int ar[n];

    printf("enter The Elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }

    printf("The Elements Of Original Array Are:");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    printf("\n");

    for (int i = 0; i < n / 2; i++)
    {
        int temp = ar[i];
        ar[i] = ar[n - i - 1];
        ar[n - i - 1] = temp;
    }

    printf("The reversed Array is:");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}