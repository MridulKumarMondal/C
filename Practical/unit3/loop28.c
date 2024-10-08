#include<stdio.h>
int main()
{
    int n,r;
    int sum=0;

    printf("enter any number:");
    scanf("%d",&n);

    int c=n;

    while (n!=0)
    {
       r=n%10;
       int fact=1;


       for (int i=1;i<=r;i++)
       {
        fact=fact*i;
       }
       sum=sum+fact;
       n/=10;
    }
    if (c==sum)
    {
        printf("%d is strong number",c);
    }
    else
    {
       printf("%d is not a strong number",c);
    }
    
    
    return 0;
}