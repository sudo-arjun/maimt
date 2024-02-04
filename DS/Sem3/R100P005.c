/*
Linear Search
Name: Chetan Prakash
*/
#include <stdio.h>
int linear(int arr[],int size,int item){
 for(int i=0;i<size;i++)
    {
        if(arr[i]==item)
            return i;
    }
    return -1;
}
int main()
{
    int size;
    printf("Enter the size of the element");
    scanf("%d",&size);
    int arr[size],item;
    for(int i=0;i<size;i++)
        scanf("%d",&arr[i]);
    printf("Enter the item to search");
    scanf("%d",&item);
    int result =linear(arr,size,item);
    if(result!=-1)
    {
        printf("Found! at %d",result+1);
    }
    else
    {
        printf("Not Found!");
    }
    return 0;
}
