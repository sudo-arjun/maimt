#include <stdio.h>

int main()
{
    float phys, maths, chem;
    printf("lets check whether you make it or not\n");
    printf("Enter the marks of Physics ");
    scanf("%f", &phys);
    printf("Enter the marks of Chemistry ");
    scanf("%f", &chem);
    printf("Enter the marks of Maths ");
    scanf("%f", &maths);
    if (phys > 33 && phys <=100 && chem > 33 && chem <= 100 && maths > 33 && maths <= 100 && chem * phys * maths / 3 > 40)
    {
        printf("Congratution! you have passed \nWith total of %f out 300", chem + phys + maths);
    }
    else
    {
        printf("Sorry you are failed!");
    }

    return 0;
}