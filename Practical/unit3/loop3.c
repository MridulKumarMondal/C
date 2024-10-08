#include<stdio.h>
int main()
/*loop for calculating the sum of 1 to n numbers*/
{
    int i,n,sum=0;

    printf("enter the number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       sum=sum+i;
       printf("%d\n",sum);
    }
    
    return 0;
}