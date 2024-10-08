#include<stdio.h>
int main()
/*loop for finding GCD value*/
{
    int num1,num2;

    printf("enterr the two positive numbers:");
    scanf("%d %d",&num1,&num2);

    while (num2!=0)
    {
        int temp=num2;
        num2=num1%num2;
        num1=temp;
    }
    printf("GCD of two numbers is:%d\n",num1);
    return 0;
}