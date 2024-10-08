#include<stdio.h>
int main()
/*loop for finding factors*/
{
    int n,i;

    printf("Enter the number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       if(n%i==0)
       {
          printf("the factors are:%d\n",i);
       }
    }
    
    return 0;
}