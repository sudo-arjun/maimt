int count_null(char str[],int size)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(str[i]==0)
        count++;
    }
    return count;
}

unsigned int strle(char str[])
{
    unsigned int i;
    for(i=0;str[i]!=0;i++);
    return i;
} 
void clear()
{
    printf("\e[1;1H\e[2J");
}

void cat(char tar[], char src[],int size)
{
    int space=count_null(tar,size);
    tar+=strle(tar);
    
    for(int i=0;i<space;i++)
    {
        tar[i]=src[i];
    } 
}
