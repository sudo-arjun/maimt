#include <stdio.h>

int main()
{
    int num;
    printf("enter the number ");
    scanf("%d", &num);

    for (int a = 2; a <= ((num/2)+1); a++)
    {
        printf("\n %d", a);
        
        int rem = num % a;

        if (a == (num/2)+1)
        {
            printf("\nit is a prime number");
        }

        if (rem == 0)
        {
            printf("\nits not a prime number");
            break;
        }
    }

    return 0;
}