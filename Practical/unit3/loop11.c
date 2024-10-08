#include<stdio.h>
int main()
/*loop for counting the last digit of a number*/
{
    int i;
    
    

   printf("enter the number:");

    
    for (scanf("%d",&i);i>10;)
    
    {
      i=i%10;
      printf("the last digit is:%d",i);
    }
     

    
    return 0;
}