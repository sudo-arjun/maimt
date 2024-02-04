//Write a program for a given matrix, you need to set every row that contains a 0 to all 0s and set every column that contains a 0 to all 0s
//Leave other unaffected elements as it is 
#include <stdio.h>
#define SIZE 3
void turn_row(int arr[][SIZE],int row)
{
    for(int i = 0;i<SIZE;i++)
    {
        arr[row][i]=-1;
    }
}
void turn_col(int arr[][SIZE],int col)
{
    for(int i = 0;i<SIZE;i++)
    {
        arr[i][col]=-1;
    }
}
void print_arr(int arr[][SIZE])
{
      for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            if(arr[i][j]==-1)
            printf("0 ");
            else
         printf("%d ",arr[i][j]);      
        }
        printf("\n");
    }
}
int main()
{
    int arr[SIZE][SIZE];
    //input
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
           printf("Enter the %d %d index element:",i,j);
           scanf("%d",&arr[i][j]);

        }
               
    }
    //replace with -1
    for(int i=0;i<SIZE;i++)
    {
        for(int j=0;j<SIZE;j++)
        {
            //search for 0 and then turn rows and col. in 0
            if(arr[i][j]==0)
            {
                //0 found and put -1 at row and col.
                turn_row(arr,i);
                turn_col(arr,j);
            }
               
        }
    }
    print_arr(arr);
}