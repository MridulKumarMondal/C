#include<stdio.h>
int main()
{
    int x=5;

    int ar[7]={4,6,9,2,3,5,1};

    for (int i = 0; i < 7; i++)
    {
        if (ar[i]<x)
        {
            printf("%d\n",ar[i]);
        }
        
    }
    
    return 0;
}