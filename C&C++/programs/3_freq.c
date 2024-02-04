#include <stdio.h>

int main()
{
    int arr[50],size,i,count,total=1;
  
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
        
        count=1;
        

        for(int j=i+1;j<size;j++)
        {
            
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
                //total++;
            }
            
        }
            printf("%5d :%2d time\n",arr[i],count);       
        
        
    }

   // printf("Total:%3d time\n",total);


    return 0;
}