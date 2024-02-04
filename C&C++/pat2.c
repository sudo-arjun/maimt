// #define paras 
// #define puneet 
#define prince
#ifdef prince
#include<stdio.h>
int main()
{
	int n,i,j,t;
	printf("Enter a number : ");
	scanf("%d",&n);
	for(i=1;i<=n+(n-1);i++)
	{
		t=n;
		for(j=1;j<=n+(n-1);j++)
		{
			printf("%d ",t);
			if(j<i)
			    t--;
			if(i+j>n+(n-1))
			    t++;
		}
		printf("\n");
	}
	return 0;
}
#endif

#ifdef puneet
#include<stdio.h>
int main()
{
   int i,j,k,n;
   printf("enter the value of number=");
   scanf("%d",&n);
   for(i=1;i<2*n;i++)
   {
       k=n; 
     printf("%d ",k);
      if(i<=n)
      {
      	for(j=1;j<(2*n)-1;j++)
      	{
		  if(i>j)
		  k=k-1;
		  if(i+j>=2*n)
		  k=k+1;
     	  printf("%d ",k);
     	}
         printf("\n");
	  }
	  if(i>n)
	  {
	  	for(j=1;j<(2*n)-1;j++)
	  	{
	  	
	  		if(i+j<2*n)
	  		k=k-1;
	  		if(j>=i)
	  		k=k+1;
	  		printf("%d ",k);
		}
		printf("\n");
	  }
   }	
}
#endif

#ifdef paras
#include<stdio.h>
int main ()
{
    int size,org,n,x,element;
    printf("enter the size :");   //size=3
    scanf("%d",&size);        
    org=size,element=size,n=(2*size)-1,x=n;
    int arr[n][n],a=1,b=1;
    while(org)
    {
        for(int i=a;i<=n;i++)
        {
            for(int j=b;j<=n;j++)
            {
                arr[i][j]=element;
            }
        }
        a++,b++,n--,element--, org--;
    }
    for(int i=1;i<=x;i++)
        {
            for(int j=1;j<=x;j++)
            {
                printf("%d ",arr[i][j]);
            }
            printf("\n");
        }
    return 0;
}
#endif