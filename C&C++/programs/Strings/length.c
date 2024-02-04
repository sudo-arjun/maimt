#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Include other headers as needed */
int main()
{
	char str[100],count,t;
  	scanf("%hhd",&t);
    getchar();
  	
	for(int i=0;i<t;i++)
    {
      scanf("%[^\n]s",str);
     getchar();
     gets(str);
    // scanf("%s",str);

      count=0;
	   while(str[count]!='\0')
       {
         count++;
       }
      printf("%d\n",count);
    }
  
  	
    return 0;
}