#include <stdio.h>
#define size 10
int main()
{
    //already sorted array
    int pos=-1, n=8, arr[size]={1,2,3,4,5,6};

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
   
    for(int i=size-1;i>pos;i--)
    {
        arr[i]=arr[i-1];
    }
    arr[pos]=n;

    //printf array
    for(int i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}