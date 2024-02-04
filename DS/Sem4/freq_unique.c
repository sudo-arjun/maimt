//frequency and unique
#include <stdio.h>

int main()
{
    int arr[50];
    int size;
    printf("Enter the size of the array:");
    scanf("%d",&size);
    for(int i=0;i<size;i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }

    //Brut force way:
    int count;
    for(int i=0; i<size; i++)
    {
        //replace the duplicate with -1 and count+1
        count=1;
        if(arr[i]==-1)
        continue;

        for(int j=i+1; j<size; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                arr[j]=-1;
            }
        }
        if(count>1)
        printf("%d :%d\n",arr[i],count);
    }
    
    int flag;
    for(int i=1;i<10;i++)
    {
        flag=1;
        for(int j=0;j<size;j++)
        {
            if(arr[j]==i)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("Not found:%d\n",i);
    }

    return 0;
}
