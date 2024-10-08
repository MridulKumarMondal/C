#include<stdio.h>
int main()
/*loop for printing sum  of even numbers*/
{
    int n,i,sum=0;
     printf("enter the number:");
     scanf("%d",&n);

     for (i=1;i<=n;i++)
     {
        if (i%2==0)
        {
            sum=sum+i;
            printf("the sum of even numbers are%d\n",sum);
        }
   
    
     }
     
    return 0;
}