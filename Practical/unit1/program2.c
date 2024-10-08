#include<stdio.h>
int main()
{
   float area,diameter,radius,circumference;
   printf("enter the radius");
   scanf("%f",&radius);
   diameter=2*radius;
   circumference=2*3.14*radius;
   area=3.14*radius*radius;
   printf("diameter:%.2f\n",diameter);
   printf("circumference:%.2f\n",circumference);
   printf("area:%.2f\n",area);
   return 0;
   
}
