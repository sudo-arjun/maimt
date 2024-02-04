/* Delete all negative elements from array. 
   if array have all negative elements then after deletion it should displayed a "array is now empty"
   IF all elements are already non-negative then a message should be displayed "array has no negative element"

 */
#include <stdio.h>
// void delete(int *,int)
int main()
{
    int arr[50], size, i, neg[49], index = -1, dynamic_size;

    // assign values to array
    printf("Enter the number of elements(max 50):");
    scanf("%d", &size);
    dynamic_size = size;
    for (i = 0; i < size; i++)
    {
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i]);
    }

    // check and insert neg. values positions to neg[]
    for (i = 0; i < size; i++)
    {
        if (arr[i] < 0)
        {
            index++;
            neg[index] = i;
        }
    }

    // delete
    for (int pos; index >= 0; index--)
    {
        pos = neg[index];
        for (i = pos; i < dynamic_size;i++)
        {
            arr[i]=arr[i+1];//chance of mistake if there are exact 50 elements in arr
        }
        dynamic_size--;
    }

    // print
    if (dynamic_size==size)
    {
        printf("no negative element");
    }
    else if (dynamic_size==0)
    {
        printf("array is empty now");
    }
    else
    {
        for (i = 0; i < dynamic_size; i++)
        {
            printf("%d ", arr[i]);
        }
    }
    return 0;
}

// void delete(int *point_arr,int pos)
// {
//     for(int i=pos;)
// }