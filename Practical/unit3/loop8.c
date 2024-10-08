#include<stdio.h>
int main()
/*loop for printing natural numbers in reverse*/
{
    int n,i;

    printf("enter the number:");
    scanf("%d",&n);

    for (i=n;i>=0;i--)
    {
        printf("%d\n",i);
    }
    



    return 0;
}