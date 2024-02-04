/*Delete all vowels*/
#include <stdio.h>
void delete_vowels(char *);
int main()
{
    char str[]="Helloo, this is my first string.";

    delete_vowels(str);

    printf("\n%s",str);

    return 0;
}
void delete_vowels(char *point)
{
    char *i,*j;
    for(i=point;*i!='\0';i++)
    {
         if (*i == 'a' || *i == 'A' || *i == 'e' || *i == 'E' || *i == 'i' || *i == 'I' || *i == 'o' || *i == 'O' || *i == 'u' || *i == 'U')
         {
            //delete
            for(j=i;*j!='\0';j++)
            {
                *j=*(j+1);
            }
            
            i--;
         }
    }
}