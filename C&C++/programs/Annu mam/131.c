//
#include <stdio.h>
int main()
{
    int a=0,b=0,count=0;
    char str1[]="sartha";
    char str2[]="123456";
    char str[30];

    printf("hello world");
    for(int i=1;i<4;i++)
    {
        for(int j=0+a;j<(i+a);j++)
        {
            str[count++]=str1[j];
        }
        
    
     for(int k=0+a;k<(i+a);k++)
        {
            str[count++]=str2[k];
        }

        a+=i;
    }
    printf("%s\n%s\n%s",str1,str2,str);
    return 0;


}