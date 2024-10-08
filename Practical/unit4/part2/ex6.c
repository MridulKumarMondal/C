// Sum of matrix

#include <stdio.h>
int main()
{
    int r, c,sum=0;

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

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum+=ar[i][j];
        }
        
    }

    printf("%d",sum);
    



    return 0;
}