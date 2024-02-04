#include <stdio.h>
#define SIZE 7

int main()
{
   int arr[]={12,27,14,11,25,6,7};
    printf("Leader elements are:=>\n");
    for(int i=0;i<SIZE;i++)
    {
        if(arr[i]<arr[i+1])
        printf("%d\n",arr[i+1]);
    }
    return 0;
}
