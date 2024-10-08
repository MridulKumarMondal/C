#include<stdio.h>
int main()
{
    int ar[6]={90,92,20,67,80,60};

    for (int i = 0; i < 6; i++)
    {
        if (ar[i]<80)
        {
            printf("%d  ",ar[i]);
        }
        
    }
    
    return 0;
}