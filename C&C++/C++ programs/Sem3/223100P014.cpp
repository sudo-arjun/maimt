/*
14. Write a program to find out sum of two numbers using command-line arguments concept.
Name:Chetan Prakash
Date:25/8/23
*/
#include <iostream>
using namespace std;

int main(int argc,char *argv[])
{
    int a,b;
    if(argc>3)
    {
        cout<<"Only two command line argument are allowed";
        return 0;
    }
    a=atoi(argv[1]);
    // cout<<argv[1];
    b=atoi(argv[2]);
    cout<<"Sum of two number is:"<<a+b;
    return 0;
}