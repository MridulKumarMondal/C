#include<stdio.h>
int main()
/*loop for finding the sum of digits of a number*/
{
    int i,sum=0,r;

    printf("enter the number:");

    for (scanf("%d",&i);i>0;)
    {
      
       r=i%10;
       sum=sum+r;
       i=i/10;

      
    }
     printf("the sum of the digits are:%d",sum);
}