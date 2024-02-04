/*
Delete element from array using element's position
Name: Chetan Prakash
Date: 24/8/2023
*/

#include <stdio.h>

int main()
{
    int arr[20], item, size, pos;
    printf("Enter the no. of elements you want to enter:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter %d element:", i + 1);
        scanf("%d", &arr[i]);
    }
    printf("Enter the position you want to delete:");
    scanf("%d", &pos);
    if (pos < 1 || pos > size)
    {
        printf("Enter valid position to delete");
        return 0;
    }

    size--;
    for (int i = pos - 1; i < size; i++)
    {
        arr[i] = arr[i + 1];
    }

    for (int i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}