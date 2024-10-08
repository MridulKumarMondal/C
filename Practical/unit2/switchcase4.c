#include<stdio.h>
int main()
{
    int num1,num2;

    printf("enter the numbers: ");
    scanf("%d %d",&num1,&num2);
    
    switch(num1 > num2)
    {
    case 0:
        printf("%d num2 is maximum",num2);
        break;
    case 1:
        printf("%d num1 is maximum",num1);
        break;
    default:
        printf("invalid expresion");
        break;
    }
    return 0;
}