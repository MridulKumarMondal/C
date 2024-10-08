#include<stdio.h>
int main()
/*loop for counting the number of digits in a number*/
{
    int n,count=0;

    printf("enter the number: ");
    scanf("%d",&n);
    if(n==0)
       printf("it has 0 digits");
     for (n=n;n!=0;count++)
     {
        n=n/10;
     }
     
     printf("the number of digits are %d",count);
    return 0;
}