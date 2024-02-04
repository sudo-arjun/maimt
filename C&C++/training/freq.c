#include <stdio.h>
void frequency(char arr[], int size)
{
  int i,count=1,k,j;
  for(i=0;i<size;i=i+count)
  {
    count=1;
    for(j=i+count;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        // for(k=j;k<size;k++)
        //   arr[k]=arr[k+1];
        // size--;
        // j--;
      }
      else 
      break;
    }
    printf("%c=%d\n",arr[i],count);
  }
}
int main()
{
  char arr[100];
  int size;
  scanf("%d\n",&size);
  int i;
  for(i=0;i<size;i++)
    scanf("%c",&arr[i]);
  frequency(arr,size);
  return 0;
}