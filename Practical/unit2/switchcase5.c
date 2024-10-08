#include<stdio.h>
int main()
{
    int i;

    printf("enter the nummber:");
    scanf("%d",&i);

    switch (i%2)
    {
    case 1:
        printf("this is an odd number");
        break;
    case 0:
        printf("this is an even number");
        break;
    
    default:
        printf("invalid expresion");
        break;
    }
    return 0;
}