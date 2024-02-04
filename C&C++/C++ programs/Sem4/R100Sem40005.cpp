/*

5.	Design a BankAccount class having data members – Account holder name, account number, balance, and member functions – to initialize data members, to deposit amount, to withdraw amount, to display balance.
Derive a class SavingAccount from BankAccount and implement the followings:-
-	Provide withdrawal facility but maximum withdrawal amount is 25,000.
-	Provide a deposit facility but if the amount is above 50,000 then ask for a PAN card and the PAN card number must be of 10 characters.
-	Display balance
Design the main() method to implement this single inheritance.

*/

#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class BankAccount
{
protected:
    char name[30];
    long accNo;
    double balance;

public:
    void intialise(char *n, long no, double bal)
    {
        strcpy(name, n);
        accNo = no;
        balance = bal;
    }
    void display()
    {
        cout << setw(24) << "Name of the customer : " << name << endl;
        cout << setw(24) << "Account No. : " << accNo << endl;
        cout << setw(24) << "Balance : " << balance << endl;
    }
    void deposit(double amount)
    {
        balance += amount;
    }
    void withdraw(double amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
        }
        else
            cout << "Insufficient balance" << endl;
    }
};

class Sav_Acc : public BankAccount
{
    long panNo;

public:
    void withdraw(double amount)
    {
        if (amount <= 25000 && amount > 0)
        {
            BankAccount::withdraw(amount);
        }
        else
            cout << "Can not process more than Rs.25,000 at once for saving account" << endl;
    }
    void deposit(double amount)
    {
        if (amount > 50000)
        {
            cout << "In order to witdraw more than 50k, you need to enter PAN no." << endl;
            cout << "Enter PAN no.:" ;
            cin >> panNo;
        }
    }
};
int main()
{
   
    
    return 0;
}