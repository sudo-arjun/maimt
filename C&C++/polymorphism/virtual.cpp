#include <iostream>
using namespace std;

class Shape {
    public:
        virtual void display()
        {
            cout << "Display of shape class" << endl;
        }
};

class Circle : public Shape{
    public:
        void display()
        {
            cout << "Display of circle class" << endl;
        }
};

class Square : public Shape{
    public:
        void display()
        {
            cout << "Display of square class" << endl;
        }
};

class Seperate{
    public:
        void display()
        {
            cout << "Totally different display" << endl;
        }
};

int main()
{
    Shape obj, *p;
    Circle cObj;
    Square sObj;
    p = &cObj;
    p -> display();
    obj.display();
    cObj.display();
    return 0;;
}
