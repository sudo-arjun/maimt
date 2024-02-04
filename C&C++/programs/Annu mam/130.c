#include <stdio.h>
#include <string.h>
struct customer
{
    int accno;
    char name[8];
    float balance;
} blank={
    0,"c",0
};

int main()
{int i =1;
    FILE *fp,*fp2;
    fp= fopen("file","wb+");
    // fp2=fopen("ok.txt","r");
    if(fp2==NULL)
    perror("error in fp2");

    for(int i=10;i<12   ;i++)
    {
        struct customer person;
        person.accno=i;
        strcpy(person.name,"chetan");
        person.balance=i*100;
        fwrite(&person,sizeof(person),1,fp);
        // fprintf(fp,"%d %s %f ",person.accno,person.name,person.balance);
    }
    if(feof(fp))
    printf("end reach");
    // printf("in");
    fseek(fp,0,SEEK_SET);


    while(feof(fp)==0)
    {
        struct customer pers;
       fread(&pers,sizeof(pers),1,fp);
        // fscanf(fp,"%d %s %f",&pers.accno,&pers.name,&pers.balance);
        
       printf("%d %s %f\n",pers.accno,pers.name,pers.balance);
    //    printf("%d--",feof(fp));
       pers=blank;
    //    if(i==2){
    //    i=fgetc(fp);
    //    printf("\\%d\\",i);
    //    }
    //    i++;

    }

    return 0;
}