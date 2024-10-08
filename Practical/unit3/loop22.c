#include<stdio.h>
int main()
/*loop for finding lcm value*/
{
    int n1,n2,max,lcm;

    printf("enter the numbers:");
    scanf("%d",&n1);
    printf("enter the numbers:");
    scanf("%d",&n2);

    if(n1>n2)
    {
        max=n1;
    }
    else
    {
        max=n2;
    }

    while (1)
    {
        if (max%n1==0 &&max%n2==0)
        {
            lcm=max;
            break;
        }
        max++;
    }
    printf("the lcm is %d",lcm);
    
    return 0;
}