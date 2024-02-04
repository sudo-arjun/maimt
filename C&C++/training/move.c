#include <stdio.h>
#include <string.h>
void reverse(char *, int);

int main()
{
    char str[100];
    int length = 0;
    printf("Enter the string : ");
    scanf("%[^\n]", str);
    length = strlen(str);
    reverse(str, length);
    return 0;
}

void reverse(char str[], int l)
{
    int i, j, count = 0, count2 = 0;
    char temp;
    for (i = 0; i < l; i++)
    {
        if (str[i] == ' ')
        {
            count2 = count / 2;
            for (j = i - 1 - count; j < count2; j++)
            {
                temp = str[j];
                str[j] = str[count];
                str[count] = temp;
                count--;
            }
            count = 0;
        }
        else
            count++;
    }
    // printf("New string is : %s", str);
    puts(str);
}