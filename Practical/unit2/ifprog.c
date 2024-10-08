#include<stdio.h>
int main()
{
    int a,b;
    printf("enter the numbers: ");
    scanf("%d %d",&a,&b);

    if(a==b)
    {
      printf("a is equal to b");
    }
    else if(a>b)
    {
        printf("a is greater than b");
        printf("a is not equal to b");
    }
    else if(a<b)
    {
        printf("a is less tahn b and\n");
        printf("a is not equal to b");
    }
  
    return 0;
}