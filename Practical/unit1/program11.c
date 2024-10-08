#include <stdio.h>
#include <math.h>
int main()
{
    float p, t, r, ci;
    printf("enter the principal ammount:\n ");
    scanf("%f", &p);
    printf("enter the time : ");
    scanf("%f", &t);
    printf("enter the rate of interest\n : ");
    scanf("%f", &r);
    ci = p * (pow(1 + (r / 100), t));
    printf("%f", ci);
    printf("total ammount with interest:%f", (ci + p));
}