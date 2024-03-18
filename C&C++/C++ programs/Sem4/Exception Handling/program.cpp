#include <iostream>
using namespace std;

int main()
{
    
    try
    {
        for(int i = 10; i>=0; i--)
        {
            if(i==0)
            {
                throw 0;
            }
            cout << "1 divide by " << i << " = " << 1/i << endl;
        }


    }
    catch(...)
    {
        cout << "Some Exception catch" << endl;
    }
    
        // cout << 1/0;

    return 0;
}