// Check If The Given Array Is Palindrome Or Not

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

    printf("The Elements Of Array Are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", ar[i]);
    }

    printf("\n");

    for (int i = 0; i < n / 2; i++)
    {
        if (ar[i] != ar[n - i - 1])

        {
            palin = 1;
        }
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
