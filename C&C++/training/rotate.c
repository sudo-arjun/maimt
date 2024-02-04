#include <stdio.h>
#include <string.h>
int main()
{
    int l1 = 0, l2 = 0, i, j;
    char str1[100], str2[100], temp;
    printf("Enter 1st string : ");
    scanf("%s", str1);
    printf("Enter 2nd string : ");
    scanf("%s", str2);
    l1 = strlen(str1);
    l2 = strlen(str2);
    if (l1 == l2)
    {
        while (l1)
        {
            temp = str2[0];
            for (j = i; j < l2; j++)
            {
                str2[j] = str2[j + 1];
            }
            str2[l2 - 1] = temp;
            if (strcmp(str1, str2) == 0)
            {
                printf("Both the strings are same");
                break;
            }
            l1--;
        }
        printf("We can not get str1 by rotating str2");
    }
    else
        printf("Rotation not possible");

    return 0;
}