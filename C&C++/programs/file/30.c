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
    if(rev==num)
    printf("%d number is palindrome",num);
    else 
    printf("Your number is not palindrome");


    return 0;
}