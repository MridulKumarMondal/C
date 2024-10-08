#include<stdio.h>
int main()
/*loop to find factorial of anumber*/
{
    int n,count,fact=1;

    printf("enter a number: ");
    scanf("%d",&n);

    for (count=1;count<=n;count++)
    {
        fact=fact*count;
    }
    printf("factorial is:%d",fact);
    
    return 0;
}