/*
Write a program in C to read any Month Number in integer and display the number of days for this month.
Sample Input 1 :
7
Expected Output :
Month have 31 days

Sample Input 2 :
2
Expected Output :
Month have 28/29 days

Sample Input 3 :
4
Expected Output :
Month have 30 days
*/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    int months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
    cout << "Enter the month no.:";
    cin >> n;
    if(n==2)
    cout<<"Months have 28/29 days";
    else if(n>0 && n<=12)
    cout << "Months have " << months[n-1] << " days";  
    else
    cout << "Enter Valid month";

    return 0;
}