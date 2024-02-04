//issues:- formatting of output using printf, funtion prototype
#include <stdio.h>
#include <stdlib.h>
#include "ANSI-color-codes.h"
#define CLR_BUF while (getchar() != '\n')
typedef struct student
{
    unsigned int roll;
    char name[20];
    int dep;    // 1 for computer, 2 for management
    int course; // 1 bca, 2 mca, 3 bba, 4 mba
    int join_year;
} stu;
void enter_data(stu *);
void view_year();
void view_all();


int main()
{
    stu stu_arr[450] = {
        {1, "chetan", 1, 1, 2021},
        {2, "aditi", 2, 2, 2022},
        {3, "shivam", 2, 2, 2021}};
    int mode;



    while (1)
    {
        system("clear");
        printf("\t1:enter data\n\t2:students who joined in year\n\t3:roll no given students\n\t" RED "Any other key to exit");
        printf(BHWHT "\n\tENTER : " reset);
        scanf("%d", &mode);

        switch (mode)
        {
        case 1:
            enter_data(stu_arr);
            break;
        case 2:
            view_year(stu_arr);
            break;
        case 3:
            view_all(stu_arr);
            break;
        default:
            return 0;
        }
    }
    return 0;
}

void enter_data(stu stu_arr[])
{
    char flag = '\n';
    static int i = 3;

    system("clear");
    for (; i < 450 && flag == '\n'; i++)
    {
        stu_arr[i].roll = i + 1;
        printf("Roll no:%d\n", stu_arr[i].roll);
        printf("Name(first_last):");
        scanf("%s", stu_arr[i].name);
        printf("Department:");
        scanf("%d", &stu_arr[i].dep);
        printf("Course : ");
        scanf("%d", &stu_arr[i].course);
        printf("Joining Year : ");
        scanf("%d", &stu_arr[i].join_year);
        CLR_BUF;
        printf("press enter to continue adding\n(any other key take you to home):");
        scanf("%c", &flag);
        CLR_BUF;
    }
}
void view_year(stu stu_arr[])
{
    int year;
    system("clear");
    printf("Enter the year:");
    scanf("%d", &year);
    for (int i = 0; i < 450 && stu_arr[i].roll != 0; i++)
    {
        if (stu_arr[i].join_year == year)
        {
            printf("%s\n", stu_arr[i].name);
        }
    }
   CLR_BUF;
    getchar();
}
void view_all(stu stu_arr[])
{
    system("clear");
    printf(BHWHT "\tRoll no\tName\tDep\tCourse\tYear of joining\n" reset);
    for (int i = 0; i < 450 && stu_arr[i].roll != 0; i++)
    {
        printf("\t%d\t%s\t%d\t%d\t%d\n", stu_arr[i].roll, stu_arr[i].name, stu_arr[i].dep, stu_arr[i].course, stu_arr[i].join_year);
    }
    CLR_BUF;
    getchar();
}
