/*
9. An  electricity  board  charges  the  following  rates  to  domestic  users  to  discourage  large  consumption  of
energy: For the first 100 units    - 60P per unit For next 200 units   - 80P per unit Beyond 300 units   - 90P per unit  All users are charged a minimum of Rs 50.00. If the total amount is more than Rs. 300.00 then an additional
surcharge of 15% is added. Write a program to read the names of users and number of units consumed and print out the charges with
names
Name:Chetan Prakash
Date:22/8/23
*/
#include <iostream>
using namespace std;
class user
{
public:
    char name[30];
    float units;
    void input()
    {
        cout << "Enter name of the user:";
        cin >> name;
        cout << "Enter the units consumed by the user:";
        cin >> units;
    }
    float bill();
};

float user::bill()
{
    float charges;
    if (units <= 100)
    {
        charges = 0.6 * units;
    }
    else if (units <= 300)
    {
        charges = 60 + 0.8 * (units - 100);
    }
    else
    {
        charges = 220 + 0.9 * (units - 300);
    }

    if (charges < 50)
        charges = 50;
    else if (charges > 300)
        charges += charges * .15;
    return charges;
}
int main()
{
    float bill;
    int n;
    cout << "Number of users:";
    cin >> n;
    user user[n];
    for(int i=0;i<n;i++)
    {
    user[i].input();
    bill = user[i].bill();
    cout<<"The bill of the user "<<user[i].name<<" for "<<user[i].units<<" units is:"<<bill<<endl;
    }
    

    return 0;
}