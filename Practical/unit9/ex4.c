// wap in c to pass structure to a function using call by reference method
#include <stdio.h>
#include <string.h>
typedef struct student
{
    int roll;
    char ch[100];
} student;

void func(student *ptr1, student *ptr2)
{
    printf("The roll is:%d\n", ptr1->roll);
    printf("The name is:%s\n", ptr1->ch);
    printf("\n");
    printf("The roll is:%d\n", ptr2->roll);
    printf("The name is:%s", ptr2->ch);
}
int main()
{
    student s1, s2;

    s1.roll = 101;
    strcpy(s1.ch, "rohan");

    fflush(stdin);

    s2.roll = 102;
    strcpy(s2.ch, "arpan");

    func(&s1, &s2);

    return 0;
}