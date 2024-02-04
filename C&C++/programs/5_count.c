/*Count total vowels and consonants*/
#include <stdio.h>
void count_alpha(char *, int *, int *);
int main()
{
    int vowels = 0, consonants = 0;
    char str[] = "Hello my first string";

    count_alpha(str, &vowels, &consonants);

    printf("vowels:%d\nconsonant:%d", vowels, consonants);
}

void count_alpha(char *point, int *point_vow, int *point_cons)
{
    char *i;
    for (i = point; *i != '\0'; i++)
    {
        if ((*i >= 97 && *i <= 122) || (*i >= 65 && *i <= 90))
        {
            if (*i == 'a' || *i == 'A' || *i == 'e' || *i == 'E' || *i == 'i' || *i == 'I' || *i == 'o' || *i == 'O' || *i == 'u' || *i == 'U')
                *point_vow=*point_vow+1;
            else
                (*point_cons)++;
        }
    }
}