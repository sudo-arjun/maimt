#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void box(int);
int main()
{
    int n,temp;
    scanf("%d",&n);
	
    temp=n;
    while(n>0)
    {

        printf("\e[1;1H\e[2J");
	usleep(300000);
        box(n);
        n--; 
	if(n==1)
	n=temp;  
    }
    
    return 0;
}


void box(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            printf("#  ");
        }
        printf("\n");
    }
}
