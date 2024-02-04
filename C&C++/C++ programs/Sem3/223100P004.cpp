/*
Write a program to check whether entered number is even or odd without using modulus operator
Name:Chetan Prakash
Date:18/8/23
*/
#include <iostream>
using namespace std;

int main()
{
    int num;
    cout << "Enter the number:";
    cin >> num;
    if (num & 1)
        cout << num << " is odd number";
    else
        cout << num << " is even number";

    return 0;
}