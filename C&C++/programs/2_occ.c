/* Find the total occurence of given element at odd position(acc to user) in array */
#include <stdio.h>

int main()
{
    int arr[50], size, count=0, n;

    // assign values to array
    start:
    printf("Enter the number of elements:");
    scanf("%d", &size);
    if (size<0)
    goto start;

    for (int i = 0; i < size; i++)
    {
        printf("\nEnter the %d element:", i);
        scanf("%d", &arr[i]);
    }
    printf("Enter the number you want to search on odd position :");
    scanf("%d",&n);

    //checking number of occurence at odd position
    for(int i=0;i<size;i+=2)
    {
        if(arr[i]==n)
        count++;
    }

    //result
    printf("There are %d occurence of no.%d at odd position",count,n);
    
    
    
    return 0;
}