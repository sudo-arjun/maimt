// Write a program that will read a line and delete from it all occurrences of the word ‘the’.

#include <stdio.h>
#include <string.h>
int main(){
    char str[100];
    char search[]="the",*p;
    printf("Enter the line:");
    scanf("%[^\n]",str);

    while((p=strstr(str,search))!=NULL)
    {
        while((*p)!=0)
            *p++=*(p+3);
    }
    printf("%s",str);
}