#include <stdio.h>

int main()
{
    int n, j, k, arr[10], i, sum = 0, count = 0;
    scanf("%d",&n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    
    for (i = 0; i < n; i++)
    {
        count=0;
        for (j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
                count++;
            {
                for (k = j; k < n; k++)
                {
                    arr[k] = arr[k + 1];
                }
                j--;
                n--;
            }
        }
                    sum = sum + count;

    }
    printf("%d", sum);
    return 0;
}