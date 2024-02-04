#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define gotoxy(x,y) printf("\033[%d;%dH", (y), (x))
int main()
{
    int i = 1;
    
    while(i<=1025)
    {
      
        
     
        //fflush(stdout);
        // fflush(stdin);
        //printf("-hello World-");
        //putchar(65);
        //gotoxy(i+1,i);
        fprintf(stdout,"a");
        usleep(2000);
    
        //printf("\n ok");
        i++;

    }    
    sleep(5);
    //getc(stdin);
    

    // printf("hello World");


    return 0;
}