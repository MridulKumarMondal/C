#include<stdio.h>
int main()
/*loop for counting the first digit of a number*/
{
    int n,firstdigit;


    printf("enter the number:");
    scanf("%d",&n);

    while (n>=10)
    {
        n=n/10;
       
    }
    firstdigit=n;
    printf("first digit is=%d",firstdigit);
    
    return 0;
}