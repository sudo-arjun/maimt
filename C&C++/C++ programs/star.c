#include <stdio.h>
int isStar(int n,int i,int j)
{
    if(i==j || (n+1)/2==i || (n+1)/2==j || i+j-1==n)
    return 1;
    return 0;
}

int main()
{
    int num;
    printf("Enter the odd no. of rows:");
    scanf("%d",&num);
    for(int i=1;i<=num;i++)
    {
        for(int j=1;j<=num;j++)
        {
            if(isStar(num,i,j))
            printf("* ");
            else
            printf("  ");
        }
        printf("\n");
    }


    return 0;
}