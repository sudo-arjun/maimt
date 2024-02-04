#include <stdio.h>
long unsigned int power(int,int);
int main()
{
    unsigned int flag=0;
    long unsigned int b,c,a;

    printf("Enter the number:");
    scanf("%lu",&a);

    printf("The binary is:");
    for(int i=63; i>=0;i--)
    {
        b=power(2,i);
        c=b & a;
        if(c || flag==1)
        {  
            printf("%lu",c/b);
            flag=1;
        }    
    }           
    printf("\n");

    return 0;
}
long unsigned int power(int n,int exp)
{
    long unsigned int product=1;
    for(int i=0;i<exp;i++)
    {
        product*=n;
    }
    return product;
}
