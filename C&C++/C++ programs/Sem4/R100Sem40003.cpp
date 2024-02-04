//Convert dollar object to rs object using constructor method
#include <iostream>
using namespace std;
class dollar
{
    float dol;
    public:
        void print()
        {
            cout << "$" << dol << endl;
        }
        void read()
        {
            cout << "Enter the dollar amount:";
            cin >> dol;
        }
        float return_dollar()
        {
            return dol;
        }
};
class rs
{
    float rupees;
    public:
        rs(dollar d)
        {
            rupees = d.return_dollar() * 83;
        }
        void print()
        {
            cout << "Rs. " << rupees << endl;
        }
};

int main()
{
    dollar dOb;
    dOb.read();
    dOb.print();
    rs rOb(dOb);
    rOb.print();

    return 0;
}