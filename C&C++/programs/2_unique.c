/* Check wheter array contains only unique elements */
#include <stdio.h>
int main()
{
    int arr[50], size, i, flag = 0;

    // assign values to array
    printf("Enter the number of elements:");
    scanf("%d", &size);
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i]);
    }

    // check
    for (i = 0; i < size; i++)
    {
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                flag = 1;
                break;
            }
        }
    }

    // print

    if (flag == 0)
    {
        printf("All elements are unique");
    }
    else
    {
        printf("There is repeatation in your numbers");
    }

    return 0;
}