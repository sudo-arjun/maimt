#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    cout.precision(4);
    cout<<1.3234554<<endl;
    int p=cout.precision(10);
    cout.setf(ios::showpoint);
    cout<<2.345<<endl<<p;
    // cout.precision(p);
    // cout<<12.12345;



    // cout<<setprecision(6)<<1.12345;
//    float pi=22./7;
//    int i;
// //    cout.width(5);
// //    cout<<i;
//     cout.fill('*');
//     cout.setf(ios::internal);
//     // cout.setf(ios::scientific);

//     cout.setf(ios::hex,ios::basefield);
//     cout.setf(ios::showpoint);
//     // cout.setf(ios::showpos);
    
//     // cout.setf()
//     // cout<<15;
//     for(i=1;i<=10;i++)
//     {
//     // cout<<10;
//         cout.width(i+2);
//         cout.precision(i+1);
//         cout<<pi<<"\n";
//     }
//     cout.unsetf(ios::scientific);
//     cout<<244.3;
    return 0;
}