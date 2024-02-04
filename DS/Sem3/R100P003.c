/*
Insertion of element in array
Name: Chetan Prakash
Date: 24/8/2023

#include <stdio.h>

int main()
{
    int arr[50],item,size,pos;
    printf("Enter the no. of elements you want to enter:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter %d element",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the element to insert and its position (resp.)");
    scanf("%d %d",&item,&pos);
    
    for(int i=size;i>=pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos-1]=item;

    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]); 
    }


    return 0;
}
*/
