#include <stdio.h>

int main()
{
    FILE *fp;
    char str[80];
    int count=1;
    //int tell;
    fp=fopen("anmolb","ab+");
    while(fgets(str,79,fp)!=0)
    {
        printf("%d%s",count,str);
        count++;
    }
   fclose(fp);
    return 0;
}
