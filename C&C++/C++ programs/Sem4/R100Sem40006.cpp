/*
6. Design a class CarManufacturer that inherits features (stock) from three parent classes namely –TyreCompany, IronCompany, and PlasticCompany. 
All parent classes have one data member which provides details regarding the availability of the stock of tyre, iron, and plastic respectively. 
All parent classes have one member function to initialize the stock. 
The class CarManufacturer have one data member- noOfCars and two member functions- one to initialize data member and 
second to check whether manufacturing of required cars possible or not based on the conditions – Every car requires 4 tyres, 50KG Iron and 30KG plastic. Design the main() method to implement this multiple inheritance.

*/
#include <iostream>
using namespace std;

class TyreCompany
{
    protected:
    int stock;
    public:
        void initialise(int s)
        {
            stock = s;
        }
};

class PlasticCompany
{
    protected:
    int stock;
    public:
        void initialise(int s)
        {
            stock = s;
        }
};

class IronCompany
{
    protected:
    int stock;
    public:
        void initialise(int s)
        {
            stock = s;
        }
};

class CarManufacturer : public PlasticCompany , public IronCompany, public TyreCompany
{
    int noOfCars;
    public:
        void initialise(int plastic, int iron, int tyre, int n)
        {
            PlasticCompany::initialise(plastic);
            IronCompany::initialise(iron);
            TyreCompany::initialise(tyre);
            noOfCars = n;
        }
        void manufacturingPossible()
        {
            if(PlasticCompany::stock >= 30*noOfCars && IronCompany::stock >= 50*noOfCars && TyreCompany::stock >= 4*noOfCars)
            cout << "The Manufacturing of cars is possible" << endl;
            else 
            cout << "The Manufacturing of cars is not possible due to shortage in some material" << endl;
        }
};
int main()
{
    CarManufacturer carObj;    
    int noOfCars;
    cout << "Enter no. of cars:";
    cin >> noOfCars;
    carObj.initialise(100,100,100,noOfCars);
    carObj.manufacturingPossible();
    return 0;
}