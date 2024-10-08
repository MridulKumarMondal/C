#include<stdio.h>
int main()
{
    int n,i=1;
    printf("enter the number:");
    scanf("%d",&n);

    do
    {
        printf("%d.hello world\n",i);
        i++;
    } while (i<=n);
    
    return 0;
}