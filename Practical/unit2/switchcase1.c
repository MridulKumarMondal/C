#include<stdio.h>
int main()
{
    int i;
    printf("enter the day number:");
    scanf("%d",&i);

    switch (i)
    {
    case 1:
        printf("this is monday!");
        break;
    case 2:
        printf("this is tuesday!");
        break;
    case 3:
        printf("this is wednesday!");
        break;
    case 4:
        printf("this is thursday!");
        break;
    case 5:
        printf("this is friday!");
        break;
    case 6:
        printf("this is saturday!");
        break;
    case 7:
        printf("this is sunday!");
        break;
    default:
        printf("invalid day number");
        break;
    }
    return 0;
}