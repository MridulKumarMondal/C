#include<stdio.h>
int main()
{
    int ar[10]={1,2,3,4,5,6,7,8,9,10};

    int e_sum=0;
    int o_sum=0;

    int result;

    for (int i = 0; i < 10; i++)
    {
        if (i%2==0)
        {
            e_sum+=ar[i];
        }
        else
        {
            o_sum+=ar[i];
        }
        
    }

    result=e_sum-o_sum;

    printf("%d",result);
    
    return 0;
}