#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int power(int base, int n)
{
    int pow = 1;
    while (n--)
        pow *= base;
    return pow;
}

int main()
{

     int a[][4]={1,2,3,4,5,6,7,8,9,10,11,12};
     int (*p)[4]=a;
    char arr[50]="my name is";
    char ar2[10]="name";
   
    // while ((c = getchar()) != 10)
    // {
    //     arr[i] = c;
    //     i++;
    // }
      printf(" \e[5;1f\e[2J");                                   
      // f,d,H working similary what is the difference
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<4;j++)
        {
            printf(" %d ",*(*(i+p)+j));
        }
    }

    return 0;
}
