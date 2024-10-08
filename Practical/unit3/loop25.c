#include<stdio.h>
int main()
{
    int i,j,n;

    printf("enter the value of n:");
    scanf("%d",&n);
    for (i=1;i<=n;i++)
    {
        int c=0;
        for (j=1;j<=i;j++)
        {
            if (i%j==0)
            {
                c++;
            }
            
        }
        if (c==2)
        {
            printf("the prime numbers between 1 to %d are%d\n",n,i);
        }
        
        
    }
    
    return 0;
}