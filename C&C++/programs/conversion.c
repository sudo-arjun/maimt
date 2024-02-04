/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int binary(int);
int main()
{
    int decimal, base;
    char loop = 'y';
    printf("Enter the number:");
    scanf("%d",&decimal);

    while (loop == 'y' || loop == 'Y')
    {
        printf("\nEnter the base(only 2,8 or 16 base are valid):");
        scanf("%d", &base);
        switch (base)
        {
        case 2:
            printf("\n%d", binary(decimal));
            break;
        case 8:
            printf("\n%o", decimal);
            break;
        case 16:
            printf("\n%x", decimal);
            break;
        default:
            printf("\nRe-enter the valid input");
        }
        printf("\nWant to again run the program(enter y for yes):");
        fflush(stdin);
        scanf(" %c", &loop);
        
    }

    return 0;
    
}

int binary(int number)
{
    int bin = 0, rem, count = 0;

    while (number)
    {
        rem = number % 2;
        bin += rem * pow(10, count);

        count++;
        number /= 2;
    }

    return bin;
}

