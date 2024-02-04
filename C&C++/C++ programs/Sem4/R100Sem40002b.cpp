//object(distance) to basic(primitive type)
#include <iostream>
using namespace std;

class Distance
{
    int km,m;
    public:
    Distance(int kilometer,int meter)
    {
        km=kilometer;
        m=meter;
    }
    void print();
    operator int()
    {
        return km*1000+m;
    }
};
void Distance::print()
{
    cout<<"Km:"<<km<<" m:"<<m<<endl;
}
int main()
{
    int km,m;
    cout << "Enter Distance in km:";
    cin >> km;
    cout << "Enter Distance in m:";
    cin >> m;
    Distance ob(km,m);
    ob.print();
    int Distance = ob;
    cout << "Distance:" << Distance;
    return 0;
}