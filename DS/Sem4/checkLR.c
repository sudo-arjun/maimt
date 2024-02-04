#include <stdio.h>

int main()
{
    int arr[50];
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);

    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element:",i);
        scanf("%d",&arr[i]);
    }

    //Logic
    for(int i=0;i<size;i++)
    {
        if((i<1 || arr[i-1]<arr[i]) && (i==size-1 || arr[i+1]<arr[i]))
        printf("%d ",arr[i]);
    }


    return 0;
}