#include <stdio.h>

int main()
{
    int arr[100], size, j, i = 0, least, great = -1, count;
    // Assignment
    do
    {
        i++;
        printf("Enter the %d  number", i);
    } while (scanf("%d", &arr[i - 1]));
    while (getchar() != '\n') ;
    size = i - 1;

    for (i = 0; i < size; i++)
    {
        if (arr[i] == -1)
            continue;

        // count number of same elements in array
        count = 1;
        for (j = i + 1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                arr[j] = -1;
            }
        }

        // assigning the value for least and greatest
        if (least == count && great < arr[i])
        {
            great = arr[i];
        }
        else if (least > count || i == 0)
        {
            least = count;
            great = arr[i];
        }
    }
    printf("%d", great);

    return 0;
}