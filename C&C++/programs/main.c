#include<stdio.h>
//#include<windows.h>
#include<unistd.h>
#include<stdlib.h>
int main ()
{
    int Hr,Min,Sec;
    int DELAY=1;
    printf("Set Time : ");
    scanf("%d%d%d",&Hr,&Min,&Sec);
    if(Hr>12||Min>60||Sec>60)
    {
        printf("ERROR ! \n");
        return 0;
    }
    while(1)
    {
        Sec++;
        if(Sec>59)
        {
            Min++;
            Sec=0;
        }
        if(Min>59)
        {
            Hr++;
            Min=0;
        }
        if(Hr>12)
        {
            Hr=1;
        }
        printf("CLOCK  :");
        printf("\n%02d:%02d:%02d\n",Hr,Min,Sec);
        sleep(DELAY);
        system("cls");
    }
	
	return 0;
}