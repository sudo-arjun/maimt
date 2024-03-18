#include <stdio.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
#define MAX 1000
typedef struct row{
    char japanese[100];
    char english[100];
    int status;
} row;

void load(FILE *file,row *arr,int *n);
int generate_rand(row *arr, int n);
void strlwr(char *str);

void main()
{
    FILE *file = fopen("list.data","r");
    row arr[MAX];
    int noOfRows = 0, correct = 0,random;
    char str[100];
    load(file,arr,&noOfRows);//need to add check that n<MAX
    /*
        1. not working when substr size is greater than main string in strstr()
    */
    while(correct < noOfRows)
    {
        printf("------------------\n");
        random = generate_rand(arr,noOfRows);
        // printf("%d",random);
        printf("%s\n",arr[random].japanese);
        scanf("%s",&str);
        // printf("%s",str); //str as pointer didn't workout why
        if(strstr(arr[random].english,str) != NULL)
        {
            printf("Correct! Value matched\n");
            arr[random].status = 1;
            correct++;
        }
        else
            printf("Sorry, it's wrong\n");
    }
    printf("Congrats you have memorized all the words :)\n");

}
void load(FILE *file,row *arr,int *n)
{
     while(feof(file) == 0){

        fscanf(file,"%s %[^\n]",&arr[*n].japanese,&arr[*n].english);
        strlwr(arr[*n].english);
        arr[*n].status = 0;
        // printf("\n%s\n%s\n%d\n",arr[*n].japanese,arr[*n].english,arr[*n].status);
        (*n)++;
    }
}

int generate_rand(row *arr,int n)
{
    int random;
    do{
        random = rand()%n;
        // printf("---%d-----\n",random);
        // printf("#%d\n",arr[random].status);
    }while(arr[random].status != 0);

    return random;
}

void strlwr(char *str)
{
    for (int i = 0 ;str[i] != 0; i++)
    {
        str[i] = tolower(str[i]);
    }
}