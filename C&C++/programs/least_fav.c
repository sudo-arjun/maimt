#include <stdio.h>
int main()
{
    int favourite[100],n,i,j,count=0,min=100,great=0;
    printf("Enter the size of array:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter the first element%d:",i+1);
        scanf("%d",&favourite[i]);
    }

    for(i=0;i<n;i++)
    {
        count=0;

        for(j=i+1;j<n;j++)
        {
            if(favourite[i]==favourite[j])
            {
                count++;
                //delete

            }
        }
        if(count<=min)
        {
            min=count;
            if(favourite[i]>great)
            {
                great=favourite[i];
            }
        }
    }

    printf("%d",great);

    return 0;
}