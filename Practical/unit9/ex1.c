// Creat a structure
#include <stdio.h>
typedef struct student
{
   int roll;
   char name[100];
} student;
int main()
{
   student s1;

   printf("Enter roll:");
   scanf("%d", &s1.roll);
   fflush(stdin);
   printf("Enter name:");
   gets(s1.name);
   fflush(stdin);

   printf("\n");

   printf("The roll number is:%d\n", s1.roll);
   printf("The name is:%s", s1.name);

   return 0;
}
