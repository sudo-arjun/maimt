/*
10. Write a program that obtains the largest of three numbers using inline function. Test the function using a 
main program. 
Name:Chetan Prakash
Date:22/8/23
*/
#include <iostream>
using namespace std;
inline float largest (float,float,float);
int main()
{
    float a,b,c;
    cout<<"Enter the three numbers:";
    cin>>a>>b>>c;
    cout<<"The largest number is:"<<largest(a,b,c);

}
inline float largest (float a,float b,float c)
{
    if(b>a)
    a=b;
    if(c>a)
    a=c;
    return a;
}
