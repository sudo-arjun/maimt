//object(time) to basic(primitive type)
//Basic type to object
#include <iostream>
using namespace std;

class Time
{
    int hr,min;
    public:
    Time(int h,int m)
    {
        hr=h;
        min=m;
    }
    void print();
    operator int()
    {
        return hr*60+min;
    }
};
void Time::print()
{
    cout<<"Hour:"<<hr<<" Min:"<<min<<endl;
}
int main()
{
    int hr,min;
    cout << "Enter time in hr:";
    cin >> hr;
    cout << "Enter time in min:";
    cin >> min;
    Time ob(hr,min);
    ob.print();

    int time = ob;
    
    cout << "time:" << time;
    return 0;
}