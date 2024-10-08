// Add two matrices

#include <stdio.h>
int main()
{
    int ar[2][2] = {{1, 2}, {3, 4}};

    int br[2][2] = {{1, 1}, {1, 1}};

    int res[2][2];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            res[i][j] = ar[i][j] + br[i][j];
        }
    }

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", res[i][j]);
        }
        printf("\n");
    }

    return 0;
}