#include <stdio.h>
int main()
{
    int num, temp, i = 2;
    scanf("%d", &num);
    temp = num;
    while (temp != 1)
    {
        if (temp % i == 0)
        {
            temp /= i;
            if (temp == 1)
                printf("%d", i);
            else
                printf("%dx", i);
        }
        else
        {
            i++;
            if (i > 3)
                i++;
        }
    }

    return 0;

    for (size_t i = 0; i < count; i++)
    {
        /* code */
    }

    do
    {
        /* code */
    } while (/* condition */);

    if (/* condition */)
    {
        /* code */
    }
}