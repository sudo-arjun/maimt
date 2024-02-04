#include <stdio.h>

int main()
{
    FILE *mahi;
    mahi=fopen("mintu.txt","w");
    fprintf(mahi,"Hello Mintu");
    // // char str[20];
    // mahi = fopen("data.txt", "w");
    // while (ch != '\n')
    // {
    //     ch = getchar();
    //     fputc(ch, mahi);
    // }

    // //fclose(mahi);

    // mahi = fopen("data.txt", "r");
    // while (ch != EOF)
    // {
    //     ch = fgetc(mahi);
    //     printf("%c", ch);
    // }
    // printf("\n");
    return 0;
}