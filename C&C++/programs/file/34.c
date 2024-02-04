#include <stdio.h>

int main()
{
    int num, flag = 1;
    printf("Enter a number:");
    scanf("%d", &num);
    if (num == 1 || num == 0)
        flag = 0;
    for (int i = 2; i * i <= num; i++)
    {
        if (num % i == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag == 1)
        printf("%d is prime no.", num);
    else
        printf("%d is not a prime no.", num);

    return 0;
}