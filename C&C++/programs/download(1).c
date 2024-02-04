#include <stdio.h>
#include <math.h>
int main()
{
    int bin_num;
    scanf("%d",&bin_num);
    
    if(binary_checker(bin_num))
    {
        printf("decimal:%d\n",bin_to_decimal(bin_num));
        printf("octal:%d\n",octal(bin_to_decimal(bin_num)));
    }
    else
    {
        printf("Enter a valid binary number\n");
        main();
    }

    return 0;
}


int binary_checker(int bin)
{
    int rem;
    while(bin)
    {
        rem=bin%10;
        bin/=10;
        if(rem!=0 && rem!=1)
        {return 0;}

    }
    return 1;
} 


int bin_to_decimal(int bin)
{
    int decimal=0,count=0,rem;
    while(bin)
    {
        rem=bin%10;
        bin/=10;
        decimal+=rem*pow(2,count);
        count++;

    }

    return decimal;
}


int octal(int decimal)
{
   int rem,octal_num=0,multiplier=1;
   
    while(decimal)
    {
        rem=decimal%8;
        decimal/=8;

        octal_num+=rem*multiplier;
        multiplier*=10;
    }
    return octal_num;
}