#include<stdio.h>
int main()
/*loop for printing the sum of natural numbers*/
{
    int n,i,sum=0;

    printf("enter the number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        sum=sum+i;
        printf("the sum of first n natural number is=%d\n",sum);
    }
    
    return 0;
}