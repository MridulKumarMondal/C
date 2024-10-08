#include<stdio.h>
#include<math.h>
int main()
{
    double length,width,a,b,c,s,rectangulararea,trianglearea,totalarea;
    printf("enter the length of a rectangle are:");
    scanf("%lf",&length);
    printf("enter the width of a rectangle are:");
    scanf("%lf",&width);
    rectangulararea=(length*width);
    printf("enter the side a of a triangle:");
    scanf("%lf",&a);
    printf("enter the side b of a triangle:");
    scanf("%lf",&b);
    printf("enter the side c of a triangle:");
    scanf("%lf",&c);
    s=(a+b+c)/2;
    trianglearea=sqrt(s*(s-a)*(s-b)*(s-c));
    totalarea=rectangulararea+trianglearea;
    printf(" the total are of makut campus is:%lf",totalarea);
    return 0;
}