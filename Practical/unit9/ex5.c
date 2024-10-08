// return structure from function
#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    char ch[100];
} student;
student data()
{
    student a;

    a.roll = 101;
    strcpy(a.ch, "rohan");

    return a;
}
student data2()
{
    student b;

    b.roll = 102;
    strcpy(b.ch, "arpan");

    return b;
}
int main()
{

    student s1 = data();
    student s2 = data2();

    printf("The roll is:%d\n", s1.roll);
    printf("The name is :%s\n", s1.ch);

    printf("\n");

    printf("The roll is:%d\n", s2.roll);
    printf("The name is :%s\n", s2.ch);

    return 0;
}