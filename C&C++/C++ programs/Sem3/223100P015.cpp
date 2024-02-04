/*
15. Define a class to represent a bank account. Include the following members:
Data members
1. Name of the depositor
2. Account number
3. Type of account
4. Balance amount in the account
Member functions
1. To assign initial values
2. To deposit an amount
3. To withdraw an amount after checking the balance
4. To display name and balance
Write a main program to test the program.
*/
#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

class account
{
    char depositerName[20];
    long number;
    // 1-saving, 2-current
    short type;
    float balance;

public:
    void initialize();
    void deposit(float amount)
    {
        balance += amount;
        cout << "amount added, current balance:" << balance<<endl;
    }
    void withdraw(float amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient Balance" <<endl;
        }
        else
        {
            balance -= amount;
            cout << "amount deducted, current balance:" << balance<<endl;
        }
    }
    void display()
    {
        cout << depositerName << "'s account balance is : " << balance<<endl;
    }
};
void account::initialize()
{
    int temp;
    cout << "Enter the name of the depositer : ";
    // cin >> depositerName;
    getline(cin,depositerName); 
    cout << "Enter the account number:";
    cin >> number;
    while (1)
    {
        cout << "Enter the type of your account:\n1.saving\n2.current\n Enter your choice(1/2):";
        cin >> temp;
        if (temp == 1 || temp == 2)
        {
            type = temp;
            break;
        }
        else
            cout << "Invalid Choice";
    }
    cout << "Enter the intital balance for your account:";
    cin >> balance;
}

main()
{
    account account1;
    account1.initialize();
    float amount;
    int choice;
    while (1)
    {
        cout << "1.Deposit\n2.Withdraw\n3.Current Balance\n4.Exit\nYour Choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the amount to be deposit:";
            cin >> amount;
            account1.deposit(amount);
            break;
        case 2:
            cout << "Enter the amount you want to withdraw:";
            cin >> amount;
            account1.withdraw(amount);
            break;
        case 3:
            account1.display();
            break;
        case 4: 
            return 0;
        default:
            cout<<"Enter valid input";
        }
    }
    return 0;
}