#include<stdio.h>
int main()
{
    int days,years,months,weeks;
    printf("enter the number of days");
    scanf("%d",&days);
    years=(days/365);
    months=(days%365)/30;
    weeks=(days%365)/7;
    
    printf("%d\n",years);
    printf("%d\n",months);
    printf("%d",weeks);

    return 0;
}