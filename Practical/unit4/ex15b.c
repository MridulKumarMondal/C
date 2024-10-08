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

    int i = 0;
    int j = n - 1;

    while (i < j)
    {
        int temp = ar[i];
        ar[i] = ar[j];
        ar[j] = temp;

        i++;
        j--;
    }

    printf("The reversed Array is:");

    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    return 0;
}