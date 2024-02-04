/*
12. Write a program using the function overloading concept to find out the area of different geometrical figures
like – circles, triangles, squares, and rectangles based on user choice.
Name:Chetan Prakash
Date:25/8/2023
*/
#include <iostream>
using namespace std;

#define CLR_SCR cout << "\e[1;1H\e[2J";
#define BOLD "\e[1m"
#define NORMAL "\e[0m"
#define RED "\e[31m"
#define CLR_BUF                 \
    while ((getchar()) != '\n') \
        ;

float area(float r)
{
    return 3.14159 * r * r;
}
float area(float base, float height)
{
    return base * height / 2;
}
double area(double side)
{
    return side * side;
}
double area(double l, double b)
{
    return l * b;
}
int main()
{
    int mode;
    float radius, base, height;
    double side, length, breadth;
    while (1)
    {
        CLR_SCR
        cout << BOLD << "Area" << NORMAL << endl;
        cout << "1. Area of Circle" << endl;
        cout << "2. Area of Triangle" << endl;
        cout << "3. Area of Square" << endl;
        cout << "4. Area of Rectangle" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter your choice:";
        cin >> mode;
        CLR_SCR
        switch (mode)
        {
        case 1:
            cout << "Enter radius of the circle:";
            cin >> radius;
            cout << "Area of circle is :" << area(radius);
            break;
        case 2:
            cout << "Enter Base and Height of the Triangle:";
            cin >> base >> height;
            cout << "Area of Triangle is :" << area(base, height);
            break;
        case 3:
            cout << "Enter side of the square:";
            cin >> side;
            cout << "Area of square is :" << area(side);
            break;
        case 4:
            cout << "Enter length and breadth of the Rectangle:";
            cin >> length >> breadth;
            cout << "Area of circle is :" << area(length, breadth);
            break;
        case 5:
            return 0;
        default:
            cout << "Please enter the valid input";
        }
        // CLR_BUF
        getchar();
        getchar();
    }
}