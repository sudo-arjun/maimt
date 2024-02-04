#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void encode(char str[], int map[])
{
    for (int i = 0; i < 10 && str[i] != 0; i++)
    {
        str[i] -= 65;
        str[i] = map[str[i]];
    }
}
int compare(char str[][11], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            
            if (strcmp(str[i], str[j])==0)
            {
                //printf("--%s----%s--",str[i],str[j]);
                return 1;
            }
                
        }
    }

    return 0;
}

int main()
{
    int test;
    scanf("%d", &test);
    int map[26], n;
    char str[6001][11] = {0}; //
    for (int t = 1; t <= test; t++)
    {
        // read mapping values
        for (int i = 0; i < 26; i++)
            scanf("%d", &map[i]);
        // no. of words
        scanf("%d", &n);
        // char sss[n][11]={0};   //
        for (int i = 0; i < n; i++)
        {
            scanf("%s", str[i]);
            encode(str[i], map);
        }
        if (compare(str, n))
        {
            printf("Case #%d: YES\n", t);
            getchar();
            system("clear");

        }
        // else
        //     printf("Case #%d: NO\n", t);
    }
    return 0;
}
