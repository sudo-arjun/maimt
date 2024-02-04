/*
Print lower diagnal matrix
Name:Chetan Prakash
Date: 1/9/23
*/
#include <stdio.h>

int main()
{
    int size;
    printf("Enter the no. of size of matrix:");
    scanf("%d",&size);
    int arr[size][size];
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            printf("%d %d element:",i,j);
            scanf("%d",&arr[i][j]);
        }
    }    
     for(int i=0;i<size;i++)
    {
        
        for(int j=0;j<size;j++)
        {
            if(i>=j)
            printf("%d ",arr[i][j]);
            else
            printf("  ");
        }
        printf("\n");
    } 


    return 0;
}