#include<stdio.h>
int main()
/*loop for finding the product of digits*/
{
    int i,pro=1,r;

    printf("enter the number:");

    for (scanf("%d",&i);i>0;)
    {
      
       r=i%10;
       pro=pro*r;
       i=i/10;

      
    }
     printf("the product of the digits are:%d",pro);
}