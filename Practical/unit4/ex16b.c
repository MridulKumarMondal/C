#include <stdio.h>
int main()
{
    int n;
    printf("Enter Size:");
    scanf("%d", &n);

    int ar[n];

    int palin = 0;

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
        if (ar[i] != ar[j])
        {

            palin = 1;
        }

        i++;
        j--;
    }

    if (palin)
    {
        printf("The Array Is not Palindrome");
    }
    else
    {

        printf("The Array Is Palindrome");
    }
    return 0;
}
