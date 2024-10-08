#include <stdio.h>
#include <math.h>
int main()
{
    int a, b, c, root, denom, r1, r2;

    printf("Enter:");
    scanf("%d %d %d", &a, &b, &c);

    root = sqrt((b * b) - (4 * a * c));
    denom = 2 * a;

    if (a == 0)
    {
        printf("This is not a quadritric equation:");
    }
    else
    {
        if (root >= 0)
        {
            r1 = (-b + root) / denom;

            r2 = (-b - root) / denom;

            printf("The roots are: %d\n %d", r1, r2);
        }
        else
        {
            printf("The roots are imaginary number!");
        }
    }

    return 0;
}