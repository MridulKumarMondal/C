#include <stdio.h>
int main()
{
    int ar[4][2];

    ar[0][0] = 1;
    ar[0][1] = 2;
    ar[1][0] = 3;
    ar[1][1] = 4;
    ar[2][0] = 5;
    ar[2][1] = 6;
    ar[3][0] = 7;
    ar[3][1] = 8;

    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            printf("%d ", ar[i][j]);
        }
        printf("\n");
    }

    return 0;
}