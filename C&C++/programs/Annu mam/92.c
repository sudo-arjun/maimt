/*
Write a program to copy the contents of one array into another in the reverse order using pointers.
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the size of array:");
    scanf("%d",&size);
    int arr[size],rev[size];
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d number:",i+1);
        scanf("%d",&arr[i]);
    }
   
    int *point_last=(arr+size-1), *p=rev;
    
    for(int i=0;i<size;i++)
    {
        *p++=*point_last--;
    }

    for(int i=0;i<size;i++)
    printf("%d ",rev[i]);

    return 0;
}