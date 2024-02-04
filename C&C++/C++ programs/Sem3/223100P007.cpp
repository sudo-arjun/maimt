/*
7. Write a program to print Pascal’s triangle up to n rows.
Name:Chetan Prakash
Date:2/9/2023
*/
#include <iostream>
#include <iomanip>
using namespace std;
int fact(int n,int stoper=0)
{
    int product = 1;
    while (n!=stoper)
        product *= n--;
    return product;
}
int comb(int n, int r)
{
    return fact(n) / (fact(r) * fact(n - r));
}
int comb_efficient(int n,int r)
{
    int bigger,smaller;
    if(r>(n-r))
    {
        bigger=r;
        smaller=n-r;
    }
    else
    {
        bigger=n-r;
        smaller=r;
    }
    

    return fact(n,bigger)/fact(smaller);
    
}
int main()
{
    int row,i,j;
    cout << "Enter the no. of rows for pascal triangle:";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        cout<<i+1<<".";
        for(int k = row-1-i; k > 0;k--)
        {
            cout<<"   ";
        }
        for (int j = 0; j <= i; j++)
        {
            cout <<setw(3) << comb_efficient(i,j)<<"   ";
        }
        cout << endl;
    }

    return 0;
}