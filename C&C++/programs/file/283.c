#include <stdio.h>

int main()
{
    int i = 1, x,sum=0;
    for (i; i <= 283; i++)
    {
        x=i;
        while(x)
        {
            x/=10;
            sum++;
        }
    }
    printf("%d",sum);

    return 0;
}