// Structure pointers:
#include <stdio.h>
#include <string.h>
typedef struct student
{

    int roll;
    char name[100];

} student;
int main()
{

    student s1, s2;
    student *ptr, *ptr2;

    ptr = &s1;
    ptr2 = &s2;

    ptr->roll = 1;
    strcpy(ptr->name, "Mridul");

    (*ptr2).roll = 2;
    strcpy((*ptr2).name, "Rajib");

    printf("NAME:%s\n", ptr->name);
    printf("ROLL:%d\n", ptr->roll);

    printf("\n");

    printf("NAME:%s\n", ptr2->name);
    printf("ROLL:%d\n", ptr2->roll);

    return 0;
}