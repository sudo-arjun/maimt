#include <stdio.h>
#define size 5
int main()
{   
    int arr[5]={10,2,30,4,5},x;

    for(int i=2; i<=size; i++)
    {
        for(int j=i-1;j>0;j--)
        {
            if(arr[j-1]>arr[j])
            {
                x=arr[j];
                arr[j]=arr[j-1];
                arr[j-1]=x;
            }
        }
    }

    printf("The largest value:%d\nThe second largest value:%d",arr[size-1],arr[size-2]);



    return 0;
}