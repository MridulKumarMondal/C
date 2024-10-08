// Find max and min element

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

    int max = ar[0][0];

    int min = ar[0][0];

    int maxRow = 0, maxCol = 0;
    int minRow = 0, minCol = 0;

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (ar[i][j] > max)
            {
                max = ar[i][j];
                maxRow = i;
                maxCol = j;
            }
            else if (ar[i][j] < min)
            {
                min = ar[i][j];
                minRow = i;
                minCol = j;
            }
        }
    }

    printf("Maximum element is %d at index (%d, %d)\n", max, maxRow, maxCol);
    printf("Minimum element is %d at index (%d, %d)\n", min, minRow, minCol);

    return 0;
}