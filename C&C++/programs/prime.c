#include <stdio.h>

int main()
{
int num;
printf("2\n3\n5\n7\n");

for(num=11; num<=100000; num+=2)
{

int div=3;
int rem=num%div;
if(rem!=0)
{ div=5;
rem=num%div;
   if (rem!=0)
   {div=7;
   rem=num%div;
      if(rem!=0)
     {
	if (num<=150){
	for(div=11;div<=num;div+=2)
	{
	int quot=num/div;
	rem=num%div;
	if(rem==0 && quot!=1)
	{break;}
	if((rem==0 && quot==1))
	{printf("%d\n",num);}
	}}
	else{

	for(div=11;div<=num/11;div+=2)
	{
		
	rem=num%div;
	if(rem==0)
	{break;}
	if(div==num/11)
	{printf("%d\n",num);}
	}}

     }         
   }
}




}

}
