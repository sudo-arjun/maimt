#include <stdio.h>

int main()
{
    int size,num,i,j,c,row_modifier=0;
    printf("Enter the size:");
    scanf("%d",&size);
    num=(size-1)/2+1;

    for(i=0;i<size;i++)
    {
        for(j=0,c=0;j<size;j++)
        {
            if(size-c <= j)
            num++;

            printf("%d ",num);
            
            if(c<row_modifier)
            {
            c++;
            num--;
            }
        }
        printf("\n");
        if(size&1)
        {
            (size/2)>i?row_modifier++:row_modifier--;
        }
        else
        {
            if(size/2-1>i)
            row_modifier++;
            else if(size/2<=i)
            row_modifier--;
        }
    }

    return 0;
}