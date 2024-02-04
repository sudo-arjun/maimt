//Divisibily check
#include <stdio.h>
int main()
{
    int rem3, rem5, num;
    //printf("Enter the number:");
    scanf("%d",&num);
    rem3=num%3;
    rem5=num%5;
    if(rem3==0)
    {
        if(rem5==0)
        {printf("code quotient");}
        else
        {printf("code");}
        
    }
    else
    {
        if(rem5==0)
        {printf("quotient");}
        else
        {printf("Number is not divisible by 3 or 5");}
    }
    return 0;
}