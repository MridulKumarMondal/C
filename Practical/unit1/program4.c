#include<stdio.h>
int main()
{
   float c,f;
    printf("enter temperature:\n ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("celcisus:%f",c);
    return 0; 
}