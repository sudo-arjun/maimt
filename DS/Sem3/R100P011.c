#include <stdio.h>
void scanArr(int *arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("Enter the %d %d element of array:",i+1,j+1);
            scanf("%d",&arr[i][j]);
        }
    }
}
int main()
{
    int size;
    printf("Enter the size for the arrays:");
    scanf("%d",&size);
    int arr1[size][size],arr2[size][size],sum[size][size];
    
    scanArr(arr1,size);
    scanArr(arr2,size);

    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            sum[i][j]=arr1[i][j]+arr2[i][j];
            printf("%d ",sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}