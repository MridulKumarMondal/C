#include<stdio.h>
int main()
/*loop for finding prime number*/
{
    int n,i,count=0;

    printf("enter the number:");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
       if (n%i==0)
       {
          count++;
       }
       
    }
    if (count==2)
    {
        printf("%d is an prime number",n);
        
    }
    else
    {
        printf("%d is not an prime number",n);
    }
    
    
    return 0;
}