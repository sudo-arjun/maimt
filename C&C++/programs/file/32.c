#include <stdio.h>

int main()
{
    int num,sum=0,ld,x;
    printf("Enter a 3 digit number:");
    scanf("%d",&num);
    x=num;
    while(num)
    {
        ld=num%10;
        num/=10;
        sum=sum+ld*ld*ld;
    }
    if(x==sum)
    printf("%d is Armstrong",x);
    else 
    printf("Entered number is not armstrong");


    return 0;
}