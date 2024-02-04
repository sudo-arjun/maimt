#include <stdio.h>
int main()
{
    int a[10], n, i, size;
    printf("Enter the size:");
    scanf("%d", &n);
    size = n;
    for (i = 0; i < n; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &a[i]);
    }

    for (i = n - 1; i >= 0; i--)
    {
        if (a[i] < 0)
        {
            for (int j = i; j < n; j++)
            {
                a[i] = a[i + 1];
            }
            n--;
        }
    }

    if (size == n)
    {
        printf("no negative element");
    }
    else if (n == 0)
    {
        printf("array is empty now");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            printf("%d ", a[i]);
        }
    }
    return 0;
}