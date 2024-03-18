#include <iostream>
using namespace std;
class Base
{
    public:
        void display()
        {
            cout << "display in base" << endl;
        }
        void show()
        {
            cout << "virtual show in base" << endl;
        }
};
class Derived : public Base
{   
    public:
        void display()
        {
            cout << "display in derived" << endl;
        }
        void show(int i)
        {
            cout << "virtual show in derived" << endl;
        }


};

int main()
{
    Derived dObj;
    Base bObj,*ptr;
    
    dObj.display();
    
    return 0;
}