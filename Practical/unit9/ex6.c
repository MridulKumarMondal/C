// wap in c to create a structure to specify data onstudents with these attributes role number,name,dept,course,year of joinining.
// creat two structure varaibles.Now creat a function to check if two students have same dep or not
#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    char name[100];
    char dept[100];
    char course[100];
    int date;

} student;

int comp(student s1, student s2)
{
    if (strcmp(s1.dept, s2.dept) == 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{

    student s1 = {1, "mridul", "SVIMS", "BCA", 2023};
    student s2 = {2, "saikat", "SVIMS", "BCA", 2023};

    if (comp(s1, s2))
    {
        printf("The dep are same");
    }
    else
    {
        printf("Not same");
    }

    return 0;
}