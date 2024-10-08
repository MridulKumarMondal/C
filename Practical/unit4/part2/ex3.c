//For storring marks
#include <stdio.h>
int main()
{
    int n, sub;

    printf("Enter:");
    scanf("%d %d", &n, &sub);

    int ar[n][sub];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("The marks are:\n");

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < sub; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}