#include<stdio.h>
int main()
{
     int n,r,arm=0;
     printf("enter any number:");
     scanf("%d",&n);

     int c=n;

     while (n>0)
     {
       r=n%10;
       arm=arm+(r*r*r);
       n=n/10;
     }

     if (c==arm)
     {
       printf("armstrong number");
     }
     else
     {
        printf("not a armstrong number");
     }
     
     
    return 0;
}