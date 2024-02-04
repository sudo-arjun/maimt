/*
2. Write a program to swap value of two variables without using third variable. Don’t use operators + and  -
Name:Chetan Prakash
Date 18/8/2023
*/
#include <iostream>
using namespace std;
inline void swap_XOR(int *a, int *b);
int main()
{
    int a, b;
    cout << "Enter the first num:";
    cin >> a;
    cout << "Enter the second num:";
    cin >> b;
    swap_XOR(&a, &b);
    cout << "First Value:" << a << endl;
    cout << "Second Value:" << b << endl;

    return 0;
}
inline void swap_XOR(int *a, int *b)
{
    *a = *a ^ *b;
    *b = *a ^ *b;
    *a = *a ^ *b;
}