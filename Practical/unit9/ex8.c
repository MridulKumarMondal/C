// nested structure
#include <stdio.h>
#include <string.h>
typedef struct doj
{
    int date;
    int month;
    int year;
} doj;
typedef struct emp
{
    int id;
    char name[100];
    struct doj join;
} emp;

int main()
{
    emp e1;

    e1.id = 1;
    strcpy(e1.name, "Mridul");
    e1.join.date = 3;
    e1.join.month = 3;
    e1.join.year = 2006;

    printf("ID:%d\n", e1.id);
    printf("NAME:%s\n", e1.name);
    printf("DATE OF JOIN:%d / %d / %d", e1.join.date, e1.join.month, e1.join.year);

    return 0;
}