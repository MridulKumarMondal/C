#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    float percentage,average,total;
    printf("enter the marks of five subjects: ");
    scanf("%f %f %f %f %f",&a,&b,&c,&d,&e);
    total=a+b+c+d+e;
    percentage=(total/500.0)*100;
    average=total/5.0;
    printf("total marks is=%f",total);
    printf(" percennntage is=%f",percentage);
    printf(" average is=%f",average);
}