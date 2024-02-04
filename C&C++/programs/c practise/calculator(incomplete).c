#include <stdio.h>
//#include <conio.h>

int main()
{
    float a, b;
    char oper;

    printf("hello world this is calculator");
    printf("\nEnter the first number: ");
    scanf("%f", &a);
    printf("Enter the second number: ");
    scanf("%f", &b);
    // printf("Answer: %f",a+b);
    printf("operator ");
    scanf(" %c", &oper);
    printf("%f",a*(oper)*b);

    return 0;
}
