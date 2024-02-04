#include <stdio.h>
#include <string.h>
int count_consec(char str[], int);
void delete(char [], int,int, int);
int main()
{
    int size, i = 0, least, great = -1, count, index, length;
    char str[100];
    // Assignment
    printf("Enter the string");
    scanf("%[^\n]", str);
    length = strlen(str);

    for (int i = 0; i < length; i++)
    {
        if (str[i] >= '0' && str[i] <= '9')
            continue;

        count = count_consec(str, i);

        if (count == 2)
        {
            str[i + 1] = count;
        }
        else if (count > 2 && count < 10)
        {
            str[i + 1] = count+'0';
            delete (str,length, i + 2, count - 2);
            length = strlen(str);
        }
        else if (count < 100)
        {
            str[i + 1] = count / 10 + '0';
            str[i + 2] = (count % 10) + '0';
            delete (str,length, i + 3, count - 3);
            length = strlen(str);
        }
    }

    printf("%s", str);

    return 0;
}

int count_consec(char str[], int i)
{
    int count = 1;
    for (i; str[i] == str[i + 1]; i++)
    {
        count++;
    }
    return count;
}

void delete(char str[],int length, int index,int count)
{
    for(int i=index;i<length-count;i++)//have to think for condition is true or not
    {
        str[i]=str[i+count];
    }
}
