// Wap in c to creat and open a file
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
FILE *fp;
char choice;
char ch;

void mainlogic()
{
    switch (choice)
    {
    case 'c':

        ch = fgetc(fp);
        printf("The Char is:%c", ch);
        printf("\n\n");
        printf("File read successfuly");
        break;

    case 'a':

        ch = fgetc(fp);

        while (ch != EOF)
        {
            printf("%c", ch);
            ch = fgetc(fp);
        }
        printf("\n\n");
        printf("File read successfuly");
        break;

    default:
        printf("Error 404");
    }
}

int main()
{
    // FILE *fp;
    // char ch[100];
    // fp = fopen("F1.txt", "w"); // Filemode:-w=write,r=read,a=append

    // // For storing data:-

    // if (fp == NULL)
    // {
    //     printf("File doesnot exist!");
    //     exit(1);
    // }
    // else
    // {
    //     printf("Enter the data:");
    //     gets(ch);
    //     fputs(ch, fp);
    //     fclose(fp);
    // }

    // printf("\n");

    // printf("File created successfuly!");

    // For storing info with previous one:-

    // FILE *fp;
    // char ch[100];
    // fp = fopen("F1.txt", "a"); // Filemode:-w=write,r=read,a=append

    // // For storing data:-

    // if (fp == NULL)
    // {
    //     printf("File doesnot exist!");
    //     exit(1);
    // }
    // else
    // {
    //     printf("Enter the data:");
    //     gets(ch);
    //     strcat(ch, " ");
    //     fputs(ch, fp);
    //     fclose(fp);
    // }

    // printf("\n");

    // printf("File created successfuly!");

    // For reading character:-

    // FILE *fp;
    // char ch;
    // fp = fopen("F1.txt", "r");

    // if (fp == NULL)
    // {
    //     printf("your file doesnot exist!");
    //     exit(1);
    // }
    // else
    // {
    //     ch = fgetc(fp);
    //     printf("The Char is:%c", ch);
    //     fclose(fp);
    // }
    // printf("\n");

    // printf("Your data is succesufly fetched!");

    // return 0;

    // FILE *fp;
    // char ch;
    // fp = fopen("F1.txt", "r");

    // if (fp == NULL)
    // {
    //     printf("your file doesnot exist!");
    //     exit(1);
    // }
    // else
    // {
    //     ch = fgetc(fp);

    //     while (ch != EOF) // EOF:End Of File
    //     {
    //         printf("%c", ch);
    //         ch = fgetc(fp);
    //     }
    // }
    // printf("\n\n");

    // printf("Your data is succesufly fetched!");

    fp = fopen("F1.txt", "r");

    if (fp == NULL)
    {
        printf("your file doesnot exist!");
        exit(1);
    }
    else
    {
        printf("Enter Choice:c/a:");
        scanf("%c", &choice);
        mainlogic(choice);
        fclose(fp);
    }

    return 0;
}