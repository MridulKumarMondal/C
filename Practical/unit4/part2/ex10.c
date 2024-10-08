// Transpose of a matrix

#include <stdio.h>
int main()
{
    int ar[2][3] = {{1, 2, 3}, {4, 5, 6}};

    int br[3][2];

    printf("The original array is:\n");

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    //For storing it inside another arra

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         br[j][i] = ar[i][j];
    //     }
    // }

    // printf("The transposed array is:\n");

    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         printf("%d ", br[i][j]);
    //     }
    //     printf("\n");
    // }

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", ar[j][i]);
        }
        printf("\n");
    }

    return 0;
}