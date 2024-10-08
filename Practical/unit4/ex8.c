#include<stdio.h>
int main()
{
    int a[5]={20,4,60,90,80};
    int min=a[0];

    for (int i = 0; i < 5; i++)
    {
        if (min>a[i])
        {
            min=a[i];
        }
        
    }

    printf("The minimum element is:%d",min);
    
    return 0;
}