// 22. Swap two numbers using function and pointers
#include <stdio.h>
void swap (int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int num1=5, num2=10;
    printf("Value of num1:%d\nValue of num2:%d\n",num1,num2);
    swap(&num1,&num2);
    printf("After Swapping:-\nValue of num1:%d\nValue of num2:%d",num1,num2);
    return 0;
}