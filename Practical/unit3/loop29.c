#include<stdio.h>
int main()
/*loop for printing fibonaci series*/
{
    int n,a=0,b=1,c;

    printf("enter the number of term:");
    scanf("%d",&n);

    for (int i=1;i<=n;i++)
    {
        printf("%d\n",a);
        c=a+b;
        a=b;
        b=c;
    }
    
    return 0;
}