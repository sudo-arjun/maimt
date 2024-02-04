/*2.Write a program to move all zeroes to the end of a given array*/

//using SWAP logic

#include <stdio.h>

int main()
{
    int arr[100], i = 0, size, flag = 0, sum,dynamic_size,x;
    //intialise
    do
    {
        i++;
        printf("Enter the %d number(any char to stop): ", i);
    } while (scanf("%d", &arr[i - 1]));
    size = i - 1;
    dynamic_size=size;
 


    //To find actual size of array 
    while(!(arr[dynamic_size-1]))
    {
        dynamic_size--;
    }
    


    for(i=0;i<dynamic_size;i++)
    {
        if(arr[i]==0 )
        {
            //swap
            x=arr[i];
            arr[i]=arr[dynamic_size-1];
            arr[dynamic_size-1]=x;
            
            dynamic_size--;
        }
        
        while(arr[dynamic_size-1]==0)
        dynamic_size--;
    }
    

    //printing
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }


    return 0;
}