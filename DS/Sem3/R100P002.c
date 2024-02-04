/*
Name:Chetan Prakash
Program: To find second largest in array
*/

#include <stdio.h>

int main()
{
    // 3 4 1 6 2
    int large, second, arr[100], size;
    printf("Enter the size of the array:");
    scanf("%d", &size);
    for (int i = 0; i < size; i++)
    {
        printf("Enter the %d element:", i + 1);
        scanf("%d", &arr[i]);
    }

    if (size > 2)
    {
        if (arr[0] < arr[1])
        {
            second = arr[0];
            large = arr[1];
        }
        else
        {

            second = arr[1];
            large = arr[0];
        }
    }
    else
    {
        printf("Enter the size greater than 1 to find second largest element");
        return 0;
    }
    
    for(int i=2;i<size;i++)
    {
        if(large<arr[i])
        {
            second=large;
            large=arr[i];
        }
        else if(second<arr[i])
        {
            second=arr[i];
        }
    }

    printf("%d %d",large,second);
    return 0;
}