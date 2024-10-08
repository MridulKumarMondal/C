#include<stdio.h>
int main()
{
    int n1,n2,n3;

    printf("enter the numbers: ");
    scanf("%d %d %d",&n1,&n2,&n3);
    
    if(n1>n2)
    {
        printf("%d: n1 is the gretest number\n",n1);
    }
    else if(n2>n3)
    {
        printf("%d: n2 is the greatest number\n",n2);
    }
    else
    {
        printf("%d: n3 is the greatest number\n",n3);
    }
    return 0;
}
//this code has an logical error dont se this//