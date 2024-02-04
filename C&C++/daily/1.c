/*
1.	Write a C program to determine eligibility for admission to a professional course based on the following criteria:
Eligibility Criteria : Marks in Maths >=65 and Marks in Phy >=55 and Marks in Chem>=50 and Total in all three subject >=190 or Total in Maths and Physics >=140 -------------------------------------

Sample Input1: -
 Input the marks obtained in Physics :65
 Input the marks obtained in Chemistry :51
Input the marks obtained in Mathematics :72
Expected Output :
The candidate is not eligible for admission.

Sample Input 2 : -
 Input the marks obtained in Physics :70
 Input the marks obtained in Chemistry :50
Input the marks obtained in Mathematics :70
Expected Output :
The candidate is eligible for admission.

*/
#include <stdio.h>

int main()
{
    float maths, phy, chem;
    printf(" Input the marks obtained in Physics :");
    scanf("%f", &phy);
    printf(" Input the marks obtained in Chemistry :");
    scanf("%f", &chem);
    printf(" Input the marks obtained in Mathematics :");
    scanf("%f", &maths);

    if (maths >= 65 && phy >= 55 && chem >= 50 && (maths + phy + chem >= 190 || maths + phy >= 140))
        printf("The candidate is eligible for admission.");
    else
        printf("The candidate is not eligible for admission.");

    return 0;
}