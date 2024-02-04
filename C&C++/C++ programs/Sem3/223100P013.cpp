/*
13. Write a program to swap value of two variables passed to a function using call by reference.
Name=Chetan Prakash
Date=25/8/2023
*/
#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers:";
    cin>>a>>b;
    swap(a,b);
    cout<<"swapped numbers using call by ref.:"<<a<<" "<<b;
    return 0;
}