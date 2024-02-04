/*
Chapter-1
1. Write a program to convert temperature from Fahrenheit to Celsius or Celsius to Fahrenheit based on user
choice.

Name:Chetan Prakash
Date:18/8/23
*/
#include <iostream>
using namespace std;
#define CLR "\e[1;1H\e[2J"
#define BOLD "\e[1m"
#define NORMAL "\e[0m"
#define RED "\e[31m"
#define CLR_BUF               \
    while ((getchar()) != '\n') \
        ;

inline float ctof(float celsius);
inline float ftoc(int fahrenheit);

int main()
{
    int mode;
    float fahren, celsius;
    do
    {
        cout << CLR;
        cout << BOLD << "Temperature Conversion" << NORMAL << endl;
        cout << "1.Fahrenheit to Celsius" << endl;
        cout << "2.Celsius to Fahrenheit" << endl;
        cout << "3.Exit" << endl;
        cout << "Enter your choice:";
        cin >> mode;
        cout << CLR;

        switch (mode)
        {
        case 1:
            cout << "Enter the temp. in Fahrenheit:";
            cin >> fahren;
            cout << "Temp in Celsius:" << ftoc(fahren);
            break;
        case 2:
            cout << "Enter the temp. in Celsius:";
            cin >> celsius;
            cout << "Temp in Fahrenheit:" << ctof(celsius);
            break;
        case 3:
            return 0;
        default:
            cout << RED << "Enter valid input" << NORMAL;
        }
        // cout<<"reached at second end";
        CLR_BUF
        getchar();
        // getchar();
        //  CLR_BUF
        // cout<<"reached at end";
    } while (1);
}

inline float ctof(float celsius)
{
    return (celsius * 1.8) + 32;
}
inline float ftoc(int fahrenheit)
{
    return (fahrenheit - 32) / 1.8;
}