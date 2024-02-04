//To access global variable using the Scope resolution operator
#include <iostream>
using namespace std;
int global = 5;
int main()
{   
    int global = 4;
    cout << "HELLO" << global << ::global;
}