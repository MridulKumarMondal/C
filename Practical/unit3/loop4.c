#include<stdio.h>
int main()
/*loop for finding even numbers*/
{
    int n,i;

    printf("enter the number:");
    scanf("%d",&n);

    for (i =1; i <=n; i++)
    {
       if (i%2==0)
       {
         printf("%d is an even number\n\n",i);
       }
       else
       {
        printf("%d is an odd number\n\n",i);
       }
     
       
    }
    
    return 0;
}