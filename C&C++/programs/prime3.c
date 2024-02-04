#include <stdio.h>

int main()
{
int num;
printf("2\n3\n");
for(num=5; num<=1000; num+=2)
{
for(int div=3; div<=num;div++)
{
 int rem=num%div;
if(rem==0)
{break;}
if(div == num)
{printf("%d\n",num);}
}


}



}
