#include <stdio.h>
int cut(long int *);
int main()
{
    char str[26];
    for(int i=0;i<26;i++)
    str[i]=i+65;
    int a,t;
    long n;
    scanf("%d",&t);
    
    for(int i=1;i<=t;i++)
    {
    scanf("%ld",&n);
    a=cut(&n);
    printf("%ld, %d",n,a);
    printf("Case #%d: %c\n",i,str[(n-1)/a]);
    }
    return 0;
}
int cut(long int *p)
{
    long int num=26;
    int i=1;
    for(;(*p)-num>0;i++)
    {
        *p=(*p)-num;
        num=26*(i+1);
        printf("%ld %ld\n",num,*p);
    }
    return i;
}