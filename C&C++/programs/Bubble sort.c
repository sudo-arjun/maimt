#include <stdio.h>
int main()
{
    int size;
    scanf("%d ",&size);
    int arr[size],i,j,temp;


    for(i =0; i<size;i++)
    {
        scanf("%d ",&arr[i]);
    }

    for(i=i-1;i>0;i--)
    {
        for(j=0;j<i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                //swap
                temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;

            }
        }
    }

    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}