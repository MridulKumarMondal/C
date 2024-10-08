//comparing two structures
#include<stdio.h>
typedef struct date
{
    int day;
    int month;
    int year;
}date;
int main()
{
     date d1={3,3,2006};

     date d2={3,3,2006};

     if (d1.day==d2.day)
     {
        printf("The date of joining are same:");
     }
     

    return 0;
}
