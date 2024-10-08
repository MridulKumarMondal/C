#include<stdio.h>
int main()
{
    float p,t,r,si;
    printf("enter the principal ammount:\n ");
    scanf("%f",&p);
    printf("enter the time : ");
    scanf("%f",&t);
    printf("enter the rate of interest\n : ");
    scanf("%f",&r);
    si=((p*t*r)/100);
    printf("%f",si);
    printf("total ammount with interest:%f",(p+si));
}