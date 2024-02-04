#include <stdio.h>
#define size 5
//void sort(int *point);
void insert(int *point, int n); 
int main()
{
    int i,n=2, arr[50]={2,3,4,7,10};
    //printf("%d",arr[49]);
    
    //sort(arr[0]);
    position(arr,n);
    for(i=0;i<=size;i++)
    {
        printf("%d ",arr[i]);
    }

    return 0;
}

//void sort(int *point)


void position(int *point,int n)
{
    int i,pos = -1,*point_size=point+size;
    //find position
    for(i=0;i<size;i++)
    {
        if(n<=*point)
        {
            pos=i;
        }
        else{
            point++;
        }
    }
    point--;
    if(pos==-1)
    {
        pos=i+1;
        point++;
    }
    

    //shift and insert at pos/point(address)
    for(int j=size;j>=pos;j--)
    {
       *point_size=*(point_size-1);
       point_size--;
    }
    *pos=n;
}
