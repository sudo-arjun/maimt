/*input:India is great
Output:great is India*/
#include <stdio.h>
void rev_sentence(char *, int);
void rev_word(char *);
int main()
{
    int i,start=0,end=0;
    char str[100];
    printf("Enter the string:");
    scanf("%[^\n]s",str);

    int length=0;
    for (i = 0; str[i] != 0; i++)
    {
        length++;
    }

    rev_sentence(str,length);
    
    /*IF DON'T WANT TO USE FUNCTION FOR REVERSING WORD*/
    // while(str[end]!=0)
    // {
    //     while(str[end]!=' ' && str[end]!=0)
    //     {end++;}
        
    //   rev_sentence(&str[start],end-start);
      
    //   start=end+1;  
    //      end++;
    // }

    rev_word(str);

    printf("%s", str);
}
void rev_sentence(char *point,int length)
{
    char *i,*mid=point+(length-1)/2,*size=point+length-1;
    char x;

    for(i=point;i<=mid;i++)
    {
        //swap
        x=*i;
        *i=*size;
        *size=x;
        
        size --;
    }
}
void rev_word(char *point)
{
    char *start=point, *end=point;
    int size;
    
    while(*end!=0)
    {
    while(*end!=' ' && *end!=0)
    end++;

    size=end-start;

    rev_sentence(start,size);
    if(end!=0)
    start=end+1;
    end++;
    }
}