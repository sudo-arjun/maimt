/*Write a program to read a file and display contents with its line numbers*/
#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp;
    int c;
    int count = 1,i=1;
    fp = fopen("file.txt", "r");
    printf("%d ",count++);
    while ((c = fgetc(fp)) != EOF)
    {
        // printf("%d>",i);
        fprintf(stdout, "%c", c);
        if (c == '\n')
            printf("%d ",count++);
        // i++;
    }

    fclose(fp);
    return 0;
}
// fscanf(fp," %[^\n] ",str);
// fgets(str,9,fp);
// printf("\n");
// fflush(stdout);