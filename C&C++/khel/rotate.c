#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <time.h>

void square(int);

int main()
{
    int size, temp, count = 0;
    printf("Enter the max. size of square:");
    scanf("%d", &size);
    temp = size;

    while (size)
    {
        square(size);

        if (count % 2 == 0)
        {
            size--;
        }
        else
        {
            size++;
        }

        if (size == 1 || size == temp)
        {
            count++;
        }
    }

    return 0;
}

void square(int n)
{
    int i, j;
    usleep(200000);
    // system("clear");
    printf("\e[1;1H\e[2J");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            printf("# ");
        }
        printf("\n");
    }
}