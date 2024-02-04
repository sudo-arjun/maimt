#include <stdio.h>
#define SIZE 3
void check_sum(int arr[],int comb[],int sum)
{
    if(arr[0]+arr[1]+arr[2]==sum)
    {
        //print
        printf("%d %d %d",arr[0],arr[1],arr[2]);
    }
    else if(arr[0]+arr[1]+arr[2]<sum)
    {
        

    }
    else
    {

    }

}
int main()
{
    int arr[]={1,2,3};
    //assuming coins will always be unique
    int sum = 20;
    int comb[3];
    int i,j,k,count=0;
    //First find no of combinations of possible with these coins

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                if(i<=j && j<=k)
                {
                    comb[0]=arr[i];
                    comb[1]=arr[j];
                    comb[2]=arr[k];
                    // count++;
                    check_sum(arr,comb,sum);
                }
            }
        }
    }
    
    for(i=0;i<count;i++)
    {
        printf("count:%d ==>",i+1);
        for(j=0;j<SIZE;j++)
        {
            printf("%d ",comb[i][j]);
        }
        printf("\n");
    }

     
}