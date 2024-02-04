/*
7. Assume that a bank maintains two kinds of accounts for customers, one called a savings account and the other as a current account. Both accounts provide deposit and withdrawal facilities.
 Maximum withdrawal at a time in case of a saving account is not more than 10,000 Rs. and in the current account, it is 50,000 Rs.
 The account holders should also maintain a minimum balance (5,000 Rs. in the case of a savings account and 10,000 Rs. in the case of a current account) and if the balance falls below this level, a service charge is imposed. The service charge in the case of the saving account is 500 Rs. but in the case of the current account, it is 1000 Rs.
Create a class account that stores 1.customer name, 2.account number, 3.balance and 4.type of account. From this device the classes cur_acct and sav_acct to make them more specific to their requirements. Include necessary member functions in order to achieve the following tasks:
(a)	Accept deposit from a customer and update the balance.
(b)	Display the balance.
(c)	Permit withdrawal and update the balance.
(d)	Check for the minimum balance, impose penalty, necessary, and update the balance.
Design the main() method to implement this hierarchical inheritance.
*/
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Account
{
protected:
    char name[30], type[30] = "no-specific-type";
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
        cout << setw(24) << "Type of the Account : " << type << endl;
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

class Cur_Acc : public Account
{
public:
    Cur_Acc()
    {
        strcpy(type, "Current");
    }
    void withdraw(double amount)
    {
        if (amount <= 50000 && amount > 0)
        {
            Account::withdraw(amount);
            check();
        }
        else
            cout << "Can not process more than Rs.50,000 at once for current account" << endl;
    }
    void check()
    {
        if (balance < 10000)
        {
            cout << "Your Balance is less Rs.10K, so Rs.1000 fine has been imposed";
            balance -= 1000;
            display();
        }
    }
};
class Sav_Acc : public Account
{
public:
    Sav_Acc()
    {
        strcpy(type, "Saving");
    }
    void withdraw(double amount)
    {
        if (amount <= 10000 && amount > 0)
        {
            Account::withdraw(amount);
            check();
        }
        else
            cout << "Can not process more than Rs.10,000 at once for saving account" << endl;
    }
    void check()
    {
        if (balance < 5000)
        {
            cout << "Your Balance is less Rs.5K, so Rs.500 fine has been imposed";
            balance -= 500;
            display();
        }
    }
};
int main()
{
    char accountType = 's', accountName[30];
    long accountNo = 123456789;
    double balance;
    cout << "Enter your name:";
    cin >> accountName;

    // if(accountType =='s')
    //     Sav_Acc account;
    // else if (accountType == 'c')
    //     Cur_Acc account;

    // alternate Way:
    Cur_Acc cAcc;
    Sav_Acc sAcc;
    cout << "Enter initial Balance:";
    cin >> balance;
    while (1)
    {
        cout << "Enter type of the account('s' for saving/'c' for current): ";
        cin >> accountType;
        if (accountType == 's')
            sAcc.intialise(accountName, accountNo, balance);
        else if (accountType == 'c')
            cAcc.intialise(accountName, accountNo, balance);
        else
        {
            cout << "Enter valid choice only" << endl;
            continue;
        }

        break;
    }

    // Logic for all operations of account
    int choice;
    double amount;
    while (1)
    {
        cout << "**********************" << endl;
        cout << "Select the operations:" << endl;
        cout << "1. Deposit" << endl;
        cout << "2. Withdraw" << endl;
        cout << "3. Display the Balance" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice:";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter amount to deposit: ";
            cin >> amount;
            accountType == 's' ? sAcc.deposit(amount) : cAcc.deposit(amount);
            break;
        case 2:
            cout << "Enter amount to withdraw:";
            cin >> amount;
            accountType == 's' ? sAcc.withdraw(amount) : cAcc.withdraw(amount);
            break;
        case 3:
            accountType == 's' ? sAcc.display() : cAcc.display();
            break;
        case 4:
            return 0;
        default:
            cout << "Enter the Valid Choice";
        }
    }

    return 0;
}