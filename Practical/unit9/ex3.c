// passing stucture to a function

#include <stdio.h>
typedef struct car
{
    int price;
    char name[100];
} car;

void cars(car s1, car s2) 
{
    printf("Price:%d\n", s1.price);
    printf("Name:%s\n", s1.name);

    printf("\n");

    printf("Price:%d\n", s2.price);
    printf("Name:%s", s2.name);
}
int main()
{
    car c1, c2;

    printf("Enter price for c1:");
    scanf("%d", &c1.price);
    fflush(stdin);
    printf("Enter name of c1:");
    gets(c1.name);
    fflush(stdin);

    printf("Enter price for c2:");
    scanf("%d", &c2.price);
    fflush(stdin);
    printf("Enter name of c2:");
    gets(c2.name);

    printf("\n");

    cars(c1, c2);

    return 0;
}