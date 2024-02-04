#include <stdio.h>

int main()
{
    int num,power,result=1;
    printf("Enter the number:");
    scanf("%d",&num);
    printf("exponent:");
    scanf("%d",&power);
    for(int i=1;i<=power;i++)
    {
        result*=num;
    }
    printf("Result:%d",result);


    return 0;
}