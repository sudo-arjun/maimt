#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    long size = 1012345678;
    char *p;
    char *data;
    try{
        p = (char *)malloc(size);
        cout << "Memory allocated";
        for(int i = 0 ; i < size-1; i+=50)
        {
            strcat(p,data);
            cout << strlen(p) << endl;
        }
    }
    catch(bad_alloc){
        cout << "Insufficient memory" << endl;
    }
    int x;
    cin >> x;

    return 0;
}