// #include<stdio.h>
// int binary(int arr[],int beg,int mid,int end,int element)
// {
// 	mid=(beg+end)/2;
// 	if(beg>end&&arr[mid]!=element)
// 	return arr[mid]=0;
// 	else
//     {
// 		if(arr[mid]==element)
// 		return mid+1;
// 		else if(arr[mid]>element)
// 		beg=mid+1;
// 		else
// 		end =mid-1;
// 		binary(arr,beg,mid,end,element);
// 	}
// }
// int main()
// {
// 	int beg,mid,end,n,i,element,arr[100],answer;
// 	printf("enter no of elements:");
// 	scanf("%d",&n);
// 	for(i=0;i<n;i++)
// 	scanf("%d",&arr[i]);
// 	printf("enter the element that you want to search:\n");
// 	scanf("%d",&element);
// 	beg=0;
// 	end=n-1;
// 	answer=binary(arr,beg,mid,end,element);
// 	if(arr[mid]==0)
// 	printf("element is not present in the list:\n");
// 	else
// 	printf("element found at position=%d",answer);
// }
#include<stdio.h>
int binary(int arr[],int beg,int mid,int end,int element)
{
	mid=(beg+end)/2;
	if(beg>end&&arr[mid]!=element)
	{
	return arr[mid]=-1;
    }
	else{
		if(arr[mid]==element)
		return mid+1;
	   else if(arr[mid]<element)
		beg=mid+1;
		else
		end=mid-1;
		binary(arr,beg,mid,end,element);
	}
}
int main()
{
	int beg,mid,end,n,i,element,arr[100],answer;
	printf("enter no of elements:");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("enter the element that you want to search:\n");
	scanf("%d",&element);
	beg=0;
	end=n-1;
	answer=binary(arr,beg,mid,end,element);
	if(arr[mid]==-1)
	printf("element is not present in the list:\n");
	else
	printf("element found at position=%d",answer);
}