#include <stdio.h>
#include <math.h>
int check_value(int);
int decimal_value(int);
int octal_value(int);
int main()
{
  int binary_num,decimal_num,octal_num;
  scanf("%d",&binary_num);
  if(check_num(binary_num))
    printf("-1");
  else
  {
    decimal_num=decimal_value(binary_num);
    octal_num=octal_value(decimal_num);
    printf("%d",octal_num);
  }
    return 0;
}
//fuction defintion used in the program
// 1. function to check the number is binay or not 
 int check_num(int x)
 {
   int rem=0,count=0;
   while(x)
   {
     rem=x%10;
     if(rem!=0||rem!=1)
     {
       count++;
       break;
     }
     else
       x=x/10;
   }
   if(count==1)
     return 1;
   else
     return 0;
 }
//2. function to convert the binary number into decimal number 
 int decimal_value(int y)
 {
   int rem=0,count=0,value=0;
   while(y)
   {
     rem=y%10;
     y=y/10;
     value=value+rem*pow(2,count);
     count++;
   }
   return (value);
 }
//3. function to convert the decimal number into octal number 
 int octal_value(int z)
 {
   int value=0,rem=0,count=0;
   while(z)
   {
     rem=z%8;
     value=value+rem*pow(10,count);
     count++;
   }
   return (value);
 }