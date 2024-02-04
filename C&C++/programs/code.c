#include <stdio.h>

int check_binary(int x)
{
   int rem=0;
  while(x)
  {
    rem=x%10;
    
    if(rem!=0 && rem!=1)
      return 0;
    else 
      x=x/10;
  } 
      return 1;
}
//decimal value
int decimal_value(int y)
 {
   int rem=0,value=0,count=1;
   while(y)
   {
     
     rem=y%10;
     y=y/10;
     //value=rem*pow(2,count);
     value=value+rem*count;
     count*=2;
   }
   return (value);
 }
//octal value
int octal_value(int z)
  {
    int rem=0,value=0,count=1;
    while(z)
    {
      rem=z%8;
      
      value=value+rem*count;
      count+=10;
      z=z/8;
    }
    return (value);
  }

int main()
{
  int binary_num,decimal_num,octal_num;
  scanf("%d",&binary_num);
  if(check_binary(binary_num)==0)
  printf("-1");
  else
  {
    decimal_num=decimal_value(binary_num);
    octal_num=octal_value(decimal_num);
    printf("%d",octal_num);
  }
    return 0;
}
