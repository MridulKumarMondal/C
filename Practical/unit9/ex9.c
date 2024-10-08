//Copy one structure to another
#include <stdio.h>
#include <string.h>
typedef struct pokemon
{
    int hp;
    char name[100];
} pokemon;

int main()
{
    pokemon a, b;

    a.hp = 100;
    strcpy(a.name, "mridul");

    b = a;

    printf("HP:%d\n", a.hp);
    printf("NAME:%s\n", a.name);
    printf("\n");
    printf("HP:%d\n", b.hp);
    printf("NAME:%s\n", b.name);

    return 0;
}