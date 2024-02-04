/*
4. Add two Distance objects using friend function. (CH05PPF002.cpp)
*/
#include <iostream>
using namespace std;
class Distance
{
    int feet, inches;
    public:
        void intialise()
        {
            cout << "Enter the feet:";
            cin >> feet;
            cout << "Enter the inches";
            cin >> inches;
        }
        void print()
        {
            cout << feet << "'" << inches << "\"" << endl;
        }
        friend Distance add(Distance, Distance);
};
Distance add (Distance ob1, Distance ob2)
{
    Distance result;
    result.inches=ob1.inches+ob2.inches;
    result.feet=ob1.feet+ob2.feet + result.inches/12;
    result.inches%=12;
    return result;
}
int main()
{
    Distance c1,c2,c3;
    c1.intialise();
    c2.intialise();
    c3 = add(c1,c2);
    //print
    cout << "c1:\n";
    c1.print();
    cout << "c2:\n";
    c2.print();
    cout << "c3:\n";
    c3.print();
    return 0;
}