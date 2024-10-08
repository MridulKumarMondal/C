#include<stdio.h>
int main()
{
    int m;
    printf("enter the month number:");
    scanf("%d",&m);

    switch (m)
    {
    case 1:
        printf("this is january it has 31 days!");
        break;
    case 2:
        printf("this is february it has 28/29 days!");
        break;
    case 3:
        printf("this is march it has 31 days!");
        break;
    case 4:
        printf("this is april it has 30 days!");
        break;
    case 5:
        printf("this is may it has 31 days!");
        break;
    case 6:
        printf("this is june it has 30 days!");
        break;
    case 7:
        printf("this is july it has 31 days!");
        break;
    case 8:
        printf("this is august it has 31 days!");
        break;
    case 9:
        printf("this is september it has 30 days!");
        break;
    case 10:
        printf("this is octobor it has 31 days!");
        break;
    case 11:
        printf("this is november it has 30 days!");
        break;
    case 12:
        printf("this is december it has 31days!");
        break;
    
    default:
        printf("invalid month number!");
        break;
    }
    return 0;
}