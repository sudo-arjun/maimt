//Basic type to object(distance)
#include <iostream>
using namespace std;

class Distance
{
    int km,m;
    public:
    Distance(int dist)
    {
        km=dist/1000;
        m=dist%1000;
    }
    void print();
};
void Distance::print()
{
    cout<<"Km:"<<km<<" m:"<<m<<endl;
}
int main()
{
    int dist;
    cout << "Enter distance in m:";
    cin >> dist;
    Distance ob = dist;
    ob.print();
    return 0;
}