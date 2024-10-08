#include<stdio.h>
int main()
{
    float c,f;
    printf("enter temperature:\n ");
    scanf("%f",&c);
    f=((c*9/5)+32);
    printf("farenhite:%.1f",f);
    return 0;
}