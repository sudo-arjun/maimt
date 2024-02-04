/*
17. Create  two  classes  DM  and  DB  which  store  the  value  of  distances.  DM  stores  distances  in  meters  and
centimeters and DB in feet and inches. Write a program that can read values for the class objects and add
one object of DM with another object of DB. Use a friend function to carry out the addition operation. The object that stores the results may be a DM
object or DB object, depending on the units in which the results are required. The display should be in the format of feet and inches or meters and centimeters depending on the object
on display
*/
#include <iostream>
using namespace std;
class DB;
class DM
{
    int m;
    float cm;

public:
    void intitalise()
    {
        cout << "Enter m:";
        cin >> m;
        cout << "Enter cm:";
        cin >> cm;
    }
    void print()
    {
        cout << m << "m " << cm << "cm" << endl;
    }
    friend DM operator+(DM mob, DB bob);
};
class DB
{
    int ft;
    float inches;

public:
    void intitalise()
    {
        cout << "Enter feet:";
        cin >> ft;
        cout << "Enter inches:";
        cin >> inches;
    }
    void print()
    {
        cout << ft << "' " << inches << "\"" << endl;
    }
    friend DM operator+(DM mob, DB bob);
};

DM operator+(DM mob, DB bob)
{
    DM mResult;
    float inches, cm, m;
    inches = bob.ft * 12 + bob.inches;
    cm = inches * 2.54;
    m = int(cm) / 100;
    mResult.m = mob.m + m;
    cm = cm - m*100;
    mResult.cm = mob.cm + cm;
    return mResult;
}
int main()
{
    DB bob1;
    DM mob1, mob2;
    mob1.intitalise();
    bob1.intitalise();

    mob2 = mob1 + bob1;
    mob2.print();
    return 0;
}