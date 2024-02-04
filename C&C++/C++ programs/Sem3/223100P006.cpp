/*
Write a program to find out area of circle, area of triangle or area of square, area of rectangle based on user
choice using switch statement.
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

inline float area_circle(float r)
{
    return 3.14159 * r * r;
}
inline float area_triangle(float base, float height)
{
    return base * height / 2;
}
inline float area_square(float side)
{
    return side * side;
}
inline float area_rectangle(float l, float b)
{
    return l * b;
}
int main()
{
    int mode;
    float radius, side, length, breadth, base, height;
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
            cout << "Area of circle is :" << area_circle(radius);
            break;
        case 2:
            cout << "Enter Base and Height of the Triangle:";
            cin >> base >> height;
            cout << "Area of Triangle is :" << area_triangle(base, height);
            break;
        case 3:
            cout << "Enter side of the square:";
            cin >> side;
            cout << "Area of square is :" << area_square(side);
            break;
        case 4:
            cout << "Enter length and breadth of the Rectangle:";
            cin >> length >> breadth;
            cout << "Area of circle is :" << area_rectangle(length, breadth);
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