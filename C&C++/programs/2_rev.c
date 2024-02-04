#include <stdio.h>
//void swap(int *,int *);
int main()
{
    int size,i,arr[50],last_index;

     // assign values to array
    start:
    printf("Enter the number of elements:");
    scanf("%d", &size);
    last_index=size-1;
    if (size<0)
    goto start;

    for (i = 0; i < size; i++)
    {
        printf("\nEnter the %d element:", i+1);
        scanf("%d", &arr[i]);
    }


    //reverse
    for(i=0;i<size/2;i++,last_index--)
    {
      int c;
      c=arr[i];
      arr[i]=arr[last_index];
      arr[last_index]=c;
    }

    //print
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    

    return 0;
}

/*void swap(int *a,int *b)
{
    int c;
    c=*a;
    *a=*b;
    *b=c;
}
*/