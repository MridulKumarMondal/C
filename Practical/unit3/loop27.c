#include<stdio.h>
int main()
{
    int n,i,sum=0;

    printf("enter a number:");
    scanf("%d",&n);

    for (i=1;i<n;i++)
    {
       if (n%i==0)
       {
        sum=sum+i;
       }
       
    }
    if (sum==n)
    {
       printf("%d is an perfect number",n);
    }
    else
    {
        printf("%d is not an perfect number",n);
    }
    
    
    return 0;
}