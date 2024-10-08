// array of structure

#include <stdio.h>
typedef struct student
{
    int roll;
    char ch[100];
} student;
int main()
{
    int n;
    printf("enter the number of recoords to store:");
    scanf("%d", &n);

    printf("\n");

    student st[n]; //array of structure

    for (int i = 0; i < n; i++)
    {
        printf("Enter roll for student %d:", i + 1);
        scanf("%d", &st[i].roll);
        fflush(stdin);
        printf("Enter name of student %d:", i + 1);
        gets(st[i].ch);
        fflush(stdin);
    }

    printf("\n");

    for (int i = 0; i < n; i++)
    {
        printf("The roll number is:%d\n", st[i].roll);
        printf("The name is:%s\n", st[i].ch);
    }

    return 0;
}