#include<stdio.h>
int main()
/*loop for finding the sum of first and last digit of a number*/
{
    int n,sum=0,firstdigit,lastdigit;
    printf("enter the number:");
    scanf("%d",&n);

    
   
     
   
    lastdigit=n%10;
    
   

    while (n>=10)
    {
        n=n/10;
    }
     firstdigit=n;

     sum=firstdigit+lastdigit;

     printf("%d",sum);
    
    return 0;
}