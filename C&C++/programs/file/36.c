#include <stdio.h>

int main()
{
    int num, flag = 1, n, i;
    printf("no. of first n prime no.:");
    scanf("%d", &n);
    for (num = 2; n != 0; num++)
    {
        flag = 1;
        for (i = 2; i * i <= num; i++)
        {
            if (num % i == 0)
            {
                flag = 0;
                break;
            }
        }
        if (flag == 1)
        {
            printf("%d ", num);
            n--;
        }
    }

    return 0;
}