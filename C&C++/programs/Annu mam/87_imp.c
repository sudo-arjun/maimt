/*
87.  Write a c program for merge sort.
*/
#include <stdio.h>
// logic using recursion

void asc(int arr[], int fi, int li)
{
    // basically mid as last index of first sorted array
    int fi1 = fi, li2 = li;
    int li1 = (fi1 + li2) / 2, fi2 = li1 + 1;
    int temp[li2 - fi1 + 1], count = 0;

    while (fi1 <= li1 && fi2 <= li2)
    {
        if (arr[fi1] < arr[fi2])
        {
            temp[count++] = arr[fi1++];
        }
        else
        {
            temp[count++] = arr[fi2++];
        }
    }

    while (fi1 <= li1)
        temp[count++] = arr[fi1++];

    while (fi2 <= li2)
        temp[count++] = arr[fi2++];

    for (int i = 0; i < count; i++)
    {
        arr[fi++] = temp[i];
        // printf("%d ", temp[i]);
    }
    // printf("\n");
}

void divide(int arr[], int fi, int li)
{
    if (fi == li)
        return;

    int mid = (fi + li) / 2;

    divide(arr, fi, mid);
    divide(arr, mid + 1, li);

    asc(arr, fi, li);
}

int main()
{
    int size;
    printf("Enter the no. of numbers:");
    scanf("%d", &size);
    int arr[size];

    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d no. :", i + 1);
        scanf("%d", &arr[i]);
    }

    divide(arr, 0, size-1);

    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);

    return 0;
}