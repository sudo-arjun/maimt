/*Write a program to count the number of occurrences of any two vowels in succession in a line of text. 
For example, in the sentence 
“Please read this application and give me gratuity” 
such occurrences are ea, ea, ui.*/
#include <stdio.h>
#include <string.h>

int main()
{
    char vowels[]="aeiouAEIOU",flag;
    char str[100]="";
    int count=0,i,j;
    printf("Enter the string:");
    scanf("%[^\n]",str);
    printf("Occurences are:");
    while(strlen(str)!=(++count))
    {
        flag=0;
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            if(str[count-1]==vowels[i] && str[count]==vowels[j])
            {
                printf("%c%c ",vowels[i],vowels[j]);
                flag=1;
                break;
            }
        }
        if(flag==1)
        break;
    }

    }

    


    return 0;
}