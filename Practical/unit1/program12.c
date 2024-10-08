#include<stdio.h>
#include<math.h>
int main()
{
float a,b,c,s,area;
printf("enter the length of side a: ");
scanf("%f",&a);
printf("enter the length of side b: ");
scanf("%f",&b);
printf("enter the length of side c: ");
scanf("%f",&c);
s=(a+b+c)/2;
area=sqrt(s*(s-a)*(s-b)*(s-c));
printf("area of triangle is%f",area);;
return 0;
}


