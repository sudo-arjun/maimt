/*
Write a program to print Floyd’s triangle up to n rows
Name:Chetan Prakash
Date:22/8/23
*/
#include <iostream>
using namespace std;
int main()
{
    int count=1,rows;
    cout<<"Enter the no. of rows for Floyd's Triangle:";
    cin>>rows;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<=i;j++)
        {
            cout<<count++<<" ";
        }
        cout<<endl;
    }
    return 0;
}