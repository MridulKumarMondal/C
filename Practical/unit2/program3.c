#include<stdio.h>
int main()
{
int  num;

printf("enter the  number");
scanf("%d",&num);

if(num%2==0)
{
    printf("this number is an even number!");
}
else
{
    printf("this number is an odd number");
}
return 0;
}