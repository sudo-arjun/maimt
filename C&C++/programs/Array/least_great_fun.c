#include <stdio.h>
int count(int arr[], int, int) int main()
{
    int arr[100], size, i = 0, least, great = -1, count, index;
    // Assignment
    do
    {
        i++;
        printf("Enter the %d  number", i);
    } while (scanf("%d", &arr[i - 1]));
    while (getchar() != '\n');
    size = i - 1;

    // Traversing through array in search of least great no.
    for (index = 0; index < size; index++)
    {
        if (index == -1)
            continue;

        count = count(arr, size, index);

        // Logic to find least popular greatest number
        if (index == 0 || least > count)
        {
            least = count;
            great = arr[least];
        }
        else if (least == count && great < arr[least])
        {
            great = arr[least];
        }
    }

    printf("Least popular greatest number:%d", great);

    return 0;
}

int count(arr[], int size, int index)
{
    int count = 1;
    for (int i = index + 1; i < size; i++)
    {
        if (arr[index] == arr[i])
        {
            count++;
            arr[i] = -1;
        }
    }
    return count;
}