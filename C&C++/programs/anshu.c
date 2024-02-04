#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0, count_digit=0, count_alpha=0, count_point=0,length;
    char c = 's';
    printf("Enter: ");
    scanf("%[^\n]s", str);
    
    length=strlen(str);

    for (i = 0; str[i] != 0; i++)
    {
        if (isalnum(str[i])||(str[i]=='-' && i==0 && str[i+1]!=0))
        {
            if ((str[i]=='-') || (str[i] >= '0' && str[i] <= '9'))
            {
                c = 'd';
                count_digit++;
            }
            else
                c = 'c';
                count_alpha++;
        }
        else if (str[i] == '.')
        {
            count_point++;
        }
    }

    if(c=='d' && count_digit==length)
    {
        printf("You entered integer");
    }
    else if(count_digit==length-1 && count_point==1)
    {
        printf("You entered a float number");
    }
    else if(c=='c' && count_alpha==1)
    {
        printf("You entered a alphanumberic character");
    }
    else
    {
        printf("You entered string");
    }

    printf("\n");

    return 0;
}