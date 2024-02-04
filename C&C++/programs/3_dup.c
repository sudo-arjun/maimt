#include <stdio.h>

int main()
{
    int arr[50],size,i,count=0,flag=0;
  
    //intialise array
    do{
    printf("Enter the size of array: ");
    scanf("%d",&size);
    if(size<0)
    printf("You can't enter a negative value for array size\n");
    }while(size<0);
    
    for(i=0;i<size;i++)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&arr[i]);
    }

   


    //logic and print
    for(i=0;i<size;i++)
    {
        if(arr[i]==-1)
        continue;

        flag=0;

        for(int j=i+1;j<size;j++)
        {
            
            if(arr[i]==arr[j])
            {
                arr[j]=-1;
                flag=1;
            }
            
        }
        if(flag==1)
        count++;

        
      
        
    }

    printf("Total no. of duplicate elements:%d\n",count);
    


    return 0;
}