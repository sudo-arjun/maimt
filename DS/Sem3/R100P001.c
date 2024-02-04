/*
Name:Chetan Prakash
Program:Find Largest in array
*/
#include <stdio.h>

int main()
{
    int arr[100],size,largest;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }
    
    //Logic
    largest=arr[0];
    for(int i=1;i<size;i++)
    {
        if(largest<arr[i])
        largest=arr[i];
    }
    printf("Largest element:%d",largest);


    return 0;
}