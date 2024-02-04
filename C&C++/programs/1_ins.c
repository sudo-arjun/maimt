#include <stdio.h>

int main()
{
    //already sorted array
    int pos=-1, n, arr[50]={1,2,3,4,5,6,7};
    int size = 7;

    printf("Enter the element to insert:");
    scanf("%d",&n);

    //to find position at which n will be placed
    for(int i=0;i<size;i++)
    {
        if(n<arr[i])
        {
            pos=i;
            break;
        }
    }
    if(pos==-1)
    pos=6;//hard coding 1st mistake
   
    //insertng of elemet 
   
    for(int i=size;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=n;

    //printf array
    for(int i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}
