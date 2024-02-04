#include <stdio.h>

int main()
{
    int num,l,rev=0;
    printf("Enter the number;");
    scanf("%d",&num);
    while(num)
    {
        l=num%10;
        num/=10;
        rev=rev*10+l;
    }
    printf("Reverse number:%d",rev);


    return 0;
}