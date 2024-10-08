#include<stdio.h>
int main()
{
    int n,i;
    printf("enter the number:");
    scanf("%d",&n);

    for (i=1/*value intialization*/;i<=n/*condition*/;i++/*increment or decrement*/)
    {
        printf("%d.hello world\n",i);
    }
    
    
    return 0;
}