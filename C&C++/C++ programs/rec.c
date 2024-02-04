#include <stdio.h>
/* Include other headers as needed */
int fibo(int f,int s,int n,int t);
int main()
{
    int n,f=0,s=1 ,t=f+s;
    scanf("%d",&n);
    fibo(f,s,n,t);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}

int fibo(int f,int s,int n,int t)
{
  static int i=1;
  if(i<n-1)
  {
    // printf("stack:%d\n",i);
    t=f+s;
    f=s ;
    s=t;
    i++;
    fibo(f,s,n,t);
    printf("no.%d\n",t);
    return 0;
  }
  else
    return 0;
}