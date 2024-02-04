#include <stdio.h>
int main()
{
  int x,y;
  scanf("%d %d",&x,&y);
  int arr[x][y],*point,l=x*y,temp;
  *point=arr[0][0];
  
  
  for(int i=0;i<l;i++)
  {
    scanf("%d",point);
    
    printf("%d ",*point);
    point++;
  }
    *point=arr[0][0];
  
  for(int i=0;i<l;i++)
  {
	scanf("%d ",&temp);
    printf("%d ",*point);
    (*point)=(*point)+temp;
    printf("%d ",*point);
    point++;
  }
   //*point1=arr1;
  
 
  
 
  return 0;
}