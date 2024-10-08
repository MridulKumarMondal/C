#include<stdio.h>
int main()
{
    int a[5]={80,100,30,4,90};
    int max=a[0];

    for (int i = 0; i < 5; i++)
    {
        if (max<a[i])
        {
            max=a[i];
        }
        
    }

    printf("The maximum element is:%d",max);
    
    return 0;
}