// Convert int array into matrix object
#include <iostream>
using namespace std;
class Matrix
{
    int **arr, m, n;
    Matrix(int **a, int r, int c)
    {
        arr = a;
        m = r;
        n = c;
    }
    void op
    void print()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << arr[i][j];
            }
             
             cout << endl;
        }
    }
};

int main()
{
    int arr[50][50], m, n;
    cout << "Enter the size of array(2d)";
    cin >> m >> n;
    // read
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "Enter " << i + 1 << " " << j + 1 << "element";
            cin >> arr[i][j];
        }
    }

    Matrix mat;

    return 0;
}