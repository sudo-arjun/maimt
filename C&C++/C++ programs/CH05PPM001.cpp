/*
1. Add two Complex objects using member function. (CH05PPM001.cpp)

Name:Chetan Prakash
*/
#include <iostream>
using namespace std;
class Complex {
    double real,img;
    public:
        void intialise()
        {
            cout << "Enter the real part:";
            cin >> real;
            cout << "Enter the img part:";
            cin >> img; 
        }
        void print()
        {
            cout << real << "+i" << img << endl;
        }
        Complex add(Complex obj1)
        {
            Complex sum;
            sum.real = real + obj1.real;
            sum.img = img + obj1.img;
            return sum;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.intialise();
    c2.intialise();
    c3 = c1.add(c2);
    //print
    cout << "c1:\n";
    c1.print();
    cout << "c2:\n";
    c2.print();
    cout << "c3:\n";
    c3.print();
    return 0;
}