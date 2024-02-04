#include <stdio.h>
int sum(int a, int b);
int main()
{
    int a=2,b=4;
    printf("%d",sum(a,b));
    
    return 0;
}
int sum(int c, int d)
{
    return c+d;
}