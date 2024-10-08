#include<stdio.h>
#include<math.h>
int main()
{
    float base,power,result;
    printf("enter the value:\n");
    scanf("%f %f",&base,&power);
    result=pow(base,power);
    printf("%.2f",result);
    return 0;
}