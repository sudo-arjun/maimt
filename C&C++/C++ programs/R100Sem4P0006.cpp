#include<iostream>
using namespace std;
class TyreCompany
{
	protected:
	int stock;
	public:
		void setTyreStock(int stk)
		{
			stock=stk;
		}	
};
class IronCompany
{
	protected:
	int stock;
	public:
		void setIronStock(int stk)
		{
			stock=stk;
		}	
};
class PlasticCompany
{
	protected:
	int stock;
	public:
		void setPlasticStock(int stk)
		{
			stock=stk;
		}	
};
class CarManufacturer: public TyreCompany, public IronCompany, public PlasticCompany
{
	int noOfCars;
	public:
		void manufactureCar(int n)
		{
			noOfCars=n;
		}	
		int isManufacturingPossible()
		{
			cout<<"Availability\n";
			cout<<"\nTyres: "<<TyreCompany::stock<<" tyres";
			cout<<"\nIron: "<<IronCompany::stock<<" KG";
			cout<<"\nPlastic: "<<PlasticCompany::stock<<" KG";
			if(TyreCompany::stock>=(noOfCars*4))//per car 4 tyre required
			{
				if(IronCompany::stock>=noOfCars*50)//per car 50KG iron required
				{
					if(PlasticCompany::stock>=noOfCars*30)//per car 30KG plastic required
					{
						return 1;
					}
					else
					{
						cout<<"\nShortage of plastic";
						return 0;
					}
				}
				else
				{
					cout<<"\nShortage of iron";
					if(PlasticCompany::stock!=noOfCars*30)//per car 30KG plastic required
					{
						cout<<"\nShortage of plastic also";
						return 0;
					}
				}
			}
			else
			{
				cout<<"\nShortage of tyres";
				if(IronCompany::stock>=noOfCars*50)//per car 50KG iron required
				{
					if(PlasticCompany::stock==noOfCars*30)//per car 30KG plastic required
					{
						return 0;
					}
					else
					{
						cout<<"\nShortage of plastic";
						return 0;
					}
				}
				else
				{
					cout<<"\nShortage of iron";
					if(PlasticCompany::stock!=noOfCars*30)//per car 30KG plastic required
					{
						cout<<"\nShortage of plastic also";
						return 0;
					}
				}
			}
		}
};
int main()
{
	int t,ir,p;
	cout<<"Enter Stock of Tyres: ";
	cin>>t;
	cout<<"Enter Stock of Iron: ";
	cin>>ir;
	cout<<"Enter Stock of Plastic ";
	cin>>p;
	CarManufacturer obj;
	obj.setTyreStock(t);
	obj.setIronStock(ir);
	obj.setPlasticStock(p);
	int noOfCarsToManufacture;
	cout<<"Enter no. of cars to manufacture: ";
	cin>>noOfCarsToManufacture;
	obj.manufactureCar(noOfCarsToManufacture);
	int status=obj.isManufacturingPossible();
	if(status==1)
	{
		cout<<"\nYes manufacturing possible";
	}
	else
	{
		cout<<"\nManufacturing not possible due to above mentioned reason(s)";
	}
	return 0;
}
