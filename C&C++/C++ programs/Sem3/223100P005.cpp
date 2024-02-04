/*
Write a program to check whether two numbers are equal or not without using relational operators.
Name:Chetan Prakash
DateL 18/8/23
*/
#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter the first number:";
    cin >> a;
    cout << "Enter the second number:";
    cin >> b;

    if(a^b)
    cout<< "Entered numbers are not equal";
    else
    cout <<"Both numbers entered are equal";
}