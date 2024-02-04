/*
3. Time is given in seconds. Write a program to convert it into Hours, Minutes and Seconds. For example, if
input is 6784 seconds then output is 01:53:04.
Name:Chetan Prakash
Date:18/8/23
*/
#include <iostream>
using namespace std;
int main()
{
    unsigned int sec, min, hr;
    cout << "Enter the time in seconds:";
    cin >> sec;
    min = sec / 60;
    sec %= 60;
    hr = min / 60;
    min %= 60;
    cout << "Time:" << hr << ":" << min << ":" << sec;
    return 0;
}
