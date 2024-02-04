//Basic type to object(time)
#include <iostream>
using namespace std;

class Time
{
    int hr,min;
    public:
    Time(int t)
    {
        hr=t/60;
        min=t%60;
    }
    void print();
};
void Time::print()
{
    cout<<"Hour:"<<hr<<" Min:"<<min<<endl;
}
int main()
{
    int time=100;
    cout << "Enter time in min:";
    cin >> time;
    Time ob(time);
    ob.print();
    return 0;
}