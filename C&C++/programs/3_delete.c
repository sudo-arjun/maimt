#include <stdio.h>

int main()
{
    int arr[50],size,dynamic_size,i;
  
    //intialise array
    Start:
    printf("Enter the size of array: ");
    scanf("%d",&size);
    if(size<0)
    {
        printf("You can't enter a negative value for array size\n");
        goto Start;
    }
    dynamic_size=size;
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

    //logic
    for(i=0;i<dynamic_size;i++)
    {
        for(int j=dynamic_size-1;j>i;j--)
        {
            if(arr[i]==arr[j])
            {
                for(int k=j;k<dynamic_size;k++)
                {
                    arr[k]=arr[k+1];
                }   

                dynamic_size--;
            
            }
        }
    }


    //print
    for(i=0;i<dynamic_size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}