#include <stdio.h>

int main()
{
    int num,fact=1;
    printf("Enter the number:");
    scanf("%d",&num);
    while(num!=0)
    {
        fact*=num;
        num--;
    }
    printf("The factorial of %d num is: %d",num,fact);


    return 0;
}