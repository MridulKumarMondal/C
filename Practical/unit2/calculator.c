#include<stdio.h>
int main()
{
    int a,b,operator;
    float result;

    printf("enter the numbers:");
    scanf("%d %d",&a,&b);
      
    printf("1.enter '1' for adition.\n2.enter '2' for substruction.\n3.enter '3' for multipliication.\n4.enter '4' for division.\n");

    printf("enter your choice:");
    scanf("%d",&operator);

    switch (operator)
    {
    case 1:
        result=a+b;
        printf("the adition of %d and %d is %f",a,b,result);
        break;
    case 2:
        result=a-b;
        printf("the substruction of %d and %d is %f",a,b,result);
        break;
    case 3:
        result=a*b;
        printf("the multiplication of %d and %d is %f",a,b,result);
        break;
    case 4:
        result=a/b;
        printf("the divison of %d and %d is %f",a,b,result);
        break;
    
    default:
        printf("invalid operation!");
        break;
    }
    return 0;
}