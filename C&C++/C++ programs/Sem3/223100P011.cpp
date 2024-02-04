/*
Write a function power() to raise a number m to a power n. the function takes a double value for m and int
value for n, and returns the result correctly. Use a default value of 2 for n to make the function to calculate
squares when this argument is omitted. Write a main that gets the values of m and n from the user to test
the function.
Name:Chetan Prakash
Date:25/8/2023
*/
#include <iostream>
using namespace std;
double power(double, int = 2);
int main()
{
    double base;
    char choice;
    int pow;
    cout << "Enter the base:";
    cin >> base;
    cout << "Do you want to enter the power(y/Y for yes,any other character is no)";
    cin >> choice;
    if (choice == 'y' || choice == 'Y')
    {
        cout << "Enter the power:";
        cin >> pow;
        cout<<"The product is : "<< power(base,pow);
    }
    else
    {
        cout<<"The product is (power = 2 by default) : "<<power(base);
    }
    return 0;
}
double power(double m, int n)
{
    double product = 1;
    for (int i = 1; i <= n; i++)
        product *= m;

    return product;
}