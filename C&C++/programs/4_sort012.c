/*Write a program in C to sort an array of 0s, 1s and 2s*/
#include <stdio.h>

int main()
{
    int arr[100], i = 0, size, n = 0, j, x;
    // intialise
    do
    {
        i++;
        printf("Enter the %-2d number(any char to stop): ", i);
    } while (scanf("%d", &arr[i - 1]));
    printf("loop closed");
    while (getchar() != '\n');

    size = i - 1;

    for (i = 0; i < size; i++)
    {
        if (arr[i] != n)
        {
            for (j = size - 1; j > i; j--)
            {
                if (arr[j] == n)
                {
                    x = arr[i];
                    arr[i] = arr[j];
                    arr[j] = x;
                }
                if (j == i + 1)
                {
                    n++;
                    i--;
                }
            }
        }
    }

    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    return 0;
}
