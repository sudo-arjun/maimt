#include<iostream>
#include<cstdlib>
#include<cstring>
using namespace std;
class BankAccount
{
	char name[20];
	long acc_number;
	double balance;
	public:
		void initialise()
		{
			cout<<"Enter account holder name\n";
			cin>>name;
			cout<<"Enter account number\n";
			cin>>acc_number;
			cout<<"Enter balance\n";
			cin>>balance;
		}
		void deposit(double amt)
		{
			balance=balance+amt;
			display();
		}
		void withdrawl(double amt)
		{
			if(balance<amt)
			{
				cout<<"Insufficient Amount\n";
			}
			else
			{
			   balance=balance-amt;	
			}
			display();
		}
		void display()
		{
			cout<<"Balance="<<balance;
		}
};
class SavingAccount:public BankAccount
{
	char pan_no[10],choice;
	public:
		void deposit(double  amt)
		{
			if(amt>50000)
			{
				cout<<"You have to enter pan card number to deposit amount more than 50,000\n";
				cout<<"Do you have pan card(y/n)\n";
				cin>>choice;
				if(choice=='y'||choice=='Y')
				{
					cout<<"Enter pan card number\n";
					cin>>pan_no;
					if(strlen(pan_no)!=10)
					{
						cout<<"INVALID PAN NUMBER\n Transaction cancelled\n";
					}
					else
					{
						BankAccount::deposit(amt);
					}
				}
				else
				{
				   cout<<"Sorry! PAN card is mandatory for this transaction\n Transaction cancelled\n";	
				}
			}
			else
			{
				BankAccount::deposit(amt);
			}
		}
		void withdrawl(double amt)
		{
			if(amt>25000)
			{
				cout<<"Limit of withdrawl exceeds\n Maximum withdrawl is 25000\n Transaction Cancelled\n";	
			}
			else
			{
				BankAccount::withdrawl(amt);
			}
		}
};
int main()
{
	SavingAccount sa;
	sa.initialise();
	double amount;
	int choice;
	while (1)
	{
		cout<<"\n1.Deposit\n 2.Withdraw\n 3.Display Balance\n 4.Exit\n";
		cout<<"Enter your choice";
		cin>>choice;
		switch(choice)
		{
			case 1:
				cout<<"Enter the amount to deposit:\n";
				cin>>amount;
				sa.deposit(amount);
				break;
			case 2:
				cout<<"Maximum withdrawl limit is 25000/-\n";
				cout<<"Enter the amount to withdraw:\n";
				cin>>amount;
				sa.withdrawl(amount);
				break;
			case 3:
				cout<<"Balance available";
				sa.display();
				break;
			case 4:
				exit(0);
			default:
				cout<<"Wrong choice";
				
					
		}
	}
	
}
