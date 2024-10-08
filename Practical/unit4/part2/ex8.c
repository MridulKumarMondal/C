// print the row number having the mximum sum in an given array also print the max sum

#include <stdio.h>

int main()
{
    int r, c;

    printf("Enter the row number: ");
    scanf("%d", &r);

    printf("Enter the column number: ");
    scanf("%d", &c);

    int ar[r][c];

    printf("Enter the elements of the array:\n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            scanf("%d", &ar[i][j]);
        }
    }

    int maxsum = 0, sum = 0;
    int maxrow = 0;

    for (int j = 0; j < c; j++)
    {
        maxsum += ar[0][j];
    }

    for (int i = 1; i < r; i++)
    {
        sum = 0;
        for (int j = 0; j < c; j++)
        {
            sum += ar[i][j];
        }
        if (sum > maxsum)
        {
            maxsum = sum;
            maxrow = i;
        }
    }

    printf("The maximum sum is %d\n", maxsum);
    printf("The row with the maximum sum is %d", maxrow+1);

    return 0;
}
