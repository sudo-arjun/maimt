#include <stdio.h>

int main()
{
int num;
printf("sum of digits(max 9 digits)");
printf("Enter the number ");
scanf("%d",&num);
printf("Result %d",(num%10)+(num/10%10)+(num/100%10)+(num/1000%10)+(num/10000%10)+(num/100000%10)+(num/1000000%10)+(num/10000000%10)+(num/100000000%10));
//printf("%d",num/10000%10);
}