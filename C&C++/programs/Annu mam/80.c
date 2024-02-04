/*
80.  Write down macro definitions for the following:
1. To find arithmetic mean of two numbers.
2. To find absolute value of a number.
3. To convert an uppercase alphabet to lowercase.
4. To obtain the bigger of two numbers
*/

#include <stdio.h>

#define MEAN(a,b) (a+b)/2
#define ABS(a) (a>0?a:-a)
#define LOWER(a) (a>96?a:a+32)
#define BIGGER(a,b) (a>b?a:b)

int main()
{
    printf("%d\n",MEAN(10,20));
    printf("%d\n",ABS(-10));
    printf("%c\n",LOWER('Z'));
    printf("%d",BIGGER(23,43));    

    return 0;
}