/*
Binary Name: Chetan Prakash
*/
#include<stdio.h>
int main()
{
    int size;
    printf("Enter the size of the array");
    scanf("%d",&size);
	int a[size],beg=0,end,mid,i,item;
	printf("Enter the elements of the array:");
	for(i=0;i<size;i++)
		scanf("%d",&a[i]);

	printf("enter the item you want to find in array\n");
	scanf("%d",&item);

	end=size-1;
	mid=(beg+end)/2;
	while(beg<=end&&a[mid]!=item)
	{
		if(item<a[mid])
		{
			end=mid-1;
		}
		else
		{
			beg=mid+1;
		}
		mid=(beg+end)/2;
	}
	if(a[mid]==item)
	printf("element found in array at location %d\n",mid);
	else
	printf("element not found in array\n");
}
