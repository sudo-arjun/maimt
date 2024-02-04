/*
2. Product of two Complex objects using member function. (CH05PPM002.cpp)
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
        Complex multiply(Complex obj1)
        {
            Complex product;
            product.real = real * obj1.real - img * obj1.img;
            product.img = img * obj1.real + real * obj1.img;
            return product;
        }
};
int main()
{
    Complex c1,c2,c3;
    c1.intialise();
    c2.intialise();
    c3 = c1.multiply(c2);
    //print
    cout << "c1:\n";
    c1.print();
    cout << "c2:\n";
    c2.print();
    cout << "c3:\n";
    c3.print();
    return 0;
}