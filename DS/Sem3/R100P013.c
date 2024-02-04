/*
13. Implementation of triangular sparse matrix
*/
#include <stdio.h>
void print_2d(int arr[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            if(i>=j)
            printf("%-2d ",arr[count++]);
            else
            printf("0  ");
        }
        printf("\n");
    }
}
void print_specific(int arr[],int i,int j)
{
    if(i>=j)
    {
    int index = ((i-1)*i)/2+j-1;
    printf("Element at %d %d is :%d",i,j,arr[index]);
    }
    else
    printf("Element at %d %d is :%d",i,j,0);   
}
void insert(int arr[],int size)
{
    int count = 0;
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<=i;j++)
        {
            printf("Enter %d %d element:",i+1,j+1);
            scanf("%d",&arr[count++]);
        }
    }
}
void element_location(int arr[],int aSize,int element)
{
    int pos=0;
    while(arr[pos++]!=element && pos<aSize);
    
    if(pos==aSize)
    {
        if(element==0)
        printf("First location found:%d %d",);
        else 

    }
}
int main()
{
    int size,aSize,choice;
    printf("Enter the size of the 2d array:");
    scanf("%d",&size);
    aSize = size*(size+1)/2;
    int arr[aSize];
    insert(arr,size);
    while(1)
    {
        printf("1.Print all elements\n2.Print specific element\n3.Element location\n4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
    switch(choice)
    {
        case 1:
            print_2d(arr,size);
            break;
        case 2:
            print_specific(arr,2,2);
            break;
        case 3:
            element_location()        
        
    }
    
    
        
    }
    



    return 0;
}