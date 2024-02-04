#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define CLR_P while(getchar()!=10);getchar();
#define CLR2_ scanf("%*[^\n]");getchar();getchar();


int main()
{
    int  mode,i=1,num,count=1;
    
    while(i!=20)
    {
        printf("\e[1;1H\e[2J1.Factorial of a no.\n");
        printf("2. Prime or not\n");
        printf("3. Odd or even\n");
        printf("4.Exit\nEnter your choice:");
        scanf("%d",&mode);

        switch(mode)
        {
            case 1:
                printf("\e[1;1H\e[2J Enter a no.");
                scanf("%d",&num);
                printf("%d",num*(num-1));
               
                CLR2 
                //getchar();
                //printf("%d",getchar());
                //fflush(stdin) not working
                //printf(" %d",count);
               
                //   getchar();
            break;
        }
        
        

    }    





    return 0;
}
