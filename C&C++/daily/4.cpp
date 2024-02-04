/*
4.	Write a program in C to display the sum of the series [ 9 + 99 + 999 + 9999 ...].
Sample Input 1:
Input the number of terms :5
Expected Output:
9 99 999 9999 99999
The sum of the series = 111105

Sample Input 2:
Input the number of terms :3
Expected Output:
9 99 999
The sum of the series = 1107
*/
#include <iostream>
using namespace std;

int main()
{
    long result=0, n, temp=9;
    cout<<"Enter n:";
    cin >> n;
    while(n)
    {
        cout << temp << " ";
        result+=temp;
        temp=temp*10+9;
        n--;
    }
    cout<<"Sum:"<<result;

    return 0;
}