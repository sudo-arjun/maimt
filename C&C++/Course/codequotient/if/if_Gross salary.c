//Calculation of gross salary
#include <stdio.h>
int main()
{
    float basic_salary, da, hra, gross_salary;
    printf("Enter the basic salary: ");
    scanf("%f", &basic_salary);
    if(basic_salary<15000)
    {
        da=basic_salary*.9;
        hra=basic_salary*.1;
    }
    else
    {
        da=basic_salary*.98;
        hra=500;
    }
    gross_salary=basic_salary+da+hra;
    printf("Your gross salary is %.1f",gross_salary);
    return 0;
}
