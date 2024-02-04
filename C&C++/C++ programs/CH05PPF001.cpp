/*
3. Add two Time objects using friend function. (CH05PPF001.cpp)
*/
#include <iostream>
using namespace std;
class Time
{
    int hr, min;
    public:
        void intialise()
        {
            cout << "Enter the hr:";
            cin >> hr;
            cout << "Enter the min:";
            cin >> min;
        }
        void print()
        {
            cout << hr << ":" << min << endl;
        }
        friend Time add(Time, Time);
};
Time add (Time ob1, Time ob2)
{
    Time result;
    result.min=ob1.min+ob2.min;
    result.hr=ob1.hr+ob2.hr + result.min/60;
    result.min%=60;
    return result;
}
int main()
{
    Time ob1,ob2,ob3;
    ob1.intialise();
    ob2.intialise();
    ob3 = add(ob1,ob2);
    //print
    cout << "ob1:\n";
    ob1.print();
    cout << "ob2:\n";
    ob2.print();
    cout << "ob3:\n";
    ob3.print();
    return 0;
}