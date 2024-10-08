// Row having maximum number of ones
#include <stdio.h>
int main()
{
    int ar[3][4] = {{1, 0, 1, 1}, {0, 1, 0, 1}, {1, 1, 1, 1}};
    int count = 0, maxcount = 0, maxrow = 0;

    for (int i = 0; i < 4; i++)
    {
        if (ar[0][i] == 1)
        {
            maxcount++;
        }
    }

    for (int i = 0; i < 3; i++)
    {
        count = 0;

        for (int j = 0; j < 4; j++)
        {
            if (ar[i][j] == 1)
            {
                count++;
            }
        }

        if (count > maxcount)
        {
            maxcount = count;
            maxrow = i;
        }
    }

    printf("The row with the maximum number of one is:%d And the number of ones are:%d", maxrow + 1, maxcount);

    return 0;
}