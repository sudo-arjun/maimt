#include <iostream>
using namespace std;
unsigned square(unsigned n)
{
    return n*n;
}
double square(double x)
{
    return x*x;
}
int main()
{
    cout<<square(float(10.0));

    return 0;
}