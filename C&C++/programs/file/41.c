#include <stdio.h>

int main()
{
    int num,divisor=2;
    printf("Enter a number:");
    scanf("%d",&num);
    if(num>1)
    {
    while(num!=1)
    {   
        if(num%divisor==0)
        {
            num/=divisor;
            printf("%d ",divisor);
        }
        else 
        divisor++;
    }
    }

    return 0;
}