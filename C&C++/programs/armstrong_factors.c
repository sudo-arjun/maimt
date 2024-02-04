#include <stdio.h>
int check_fact(int);
int factorial(int);
int main()
{
    int n,divisor=2;
    scanf("%d",&n);
    if(check_fact(n))
    {
        printf("factors:\n");
        while(n>1)
        {
            if(n%divisor==0)
            {
                printf("%d\n",divisor);
                n/=divisor;
            }
            else
            {
                divisor++;
            }
        }
    }
    else
    {
        printf("The number you entered is not armstrong");
    }
    return 0;
}

int check_fact(int n)
{
    int sum_fact=0,x=n,ld;
    
    while(x)
    {
        ld=x%10;
        sum_fact+=factorial(ld);
        x/=10;
    }
    
    if(sum_fact==n)
    return 1;
    else 
    return 0;
}

int factorial(int num)
{
    int product=1;
    while(num>1)
    {
        product*=num;
        num--;
    }
    return product;
}