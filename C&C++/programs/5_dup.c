/*Delete duplicate alphabets*/
#include <stdio.h>
void delete_duplicate(char *);
int main()
{
    char str[100];
    printf("Enter the string");
    scanf("%[^\n]",str);

    
    delete_duplicate(str);

    printf("%s",str);
    return 0;
}
void delete_duplicate(char *point)
{
    char *i,*j,*k;
    for(i=point;*i!=0;i++)
    {
        for(j=i+1;*j!=0;j++)
        {
            if(*i==*j)
            {
                //delete
                for(k=j;*k!=0;k++)
                {
                    *k=*(k+1);
                }

                j--;
            }
        }
    }
}