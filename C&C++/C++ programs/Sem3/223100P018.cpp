/*
18. Write a menu-driven program to add, subtract and multiply two complex objects when passed to a member 
function
*/
#include <iostream>
using namespace std;
class Complex
{
    double real, img;
    public:
        void intialise()
        {
            cout << "Enter real:";
            cin >> real;
            cout << "Enter img:";
            cin >> img;
        }
        void print()
        {
            cout << real << "+i" << img;
        }
        Complex operator + (Complex ob)
        {
            Complex result;
            result.real = ob.real + real;
            result.img = ob.img + img; 
            return result;
        }
        Complex operator - (Complex ob)
        {
            Complex result;
            result.real = real - ob.real;
            result.img = img - ob.img; 
            return result;
        }
        Complex operator * (Complex ob)
        {
            Complex result;
            result.real = real * ob.real - img * ob.img;
            result.img = real * ob.img + img * ob.real; 
            return result;
        }
};
int main()
{
    

    return 0;
}