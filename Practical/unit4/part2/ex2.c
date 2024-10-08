#include <stdio.h>
int main()
{
    int r, c;

    printf("Enter the row number:");
    scanf("%d", &r);

    printf("Enter the column number:");
    scanf("%d", &c);

    int ar[r][c];

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    printf("The array is:\n");

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("%d ", ar[i][j]);
        }

        printf("\n");
    }

    return 0;
}