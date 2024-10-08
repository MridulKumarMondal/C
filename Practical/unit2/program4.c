#include<stdio.h>
int main()
{ 
    int num;

    printf("enter the number: ");
    scanf("%d",&num);
    
    if(num%5==0&&num%11==0)
    {
        printf("%d is divisible by 5 and 11",num);
    }
    else
    {
        printf("%d is either not divisible by 5 or 11 or it is not divisible by both of them",num);
    }
    return 0;
}


