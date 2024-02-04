/*
7. Write a program to print Pascal’s triangle up to n rows.
Name:Chetan Prakash
Date:22/8/2023
*/
#include <iostream>
#include <stdio.h>
using namespace std;
#define CLR_SCR cout << "\e[1;1H\e[2J";

int main()
{
    int size=7;
    cout << "Enter the no. of rows for pascal triangle:";
    cin >> size;
    // scanf("%d",&size);
    int grid[size][size];
    
    for(int i=0;i<size;i++)
    {
        for(int j=0;j<size;j++)
        {
            grid[i][j]=0;
        }
    }
    grid[0][size / 2] = 1;

    for (int i = 1; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (i & 1)
            {
                if (j < size - 1)
                    grid[i][j] = grid[i - 1][j] + grid[i - 1][j + 1];
                else
                    grid[i][j] = grid[i - 1][j];
            }
            else
            {
                if (j == 0)
                    grid[i][j] = grid[i - 1][j];
                else
                    grid[i][j] = grid[i - 1][j] + grid[i - 1][j - 1];
            }
        }
    }

    CLR_SCR
    for (int i = 0; i < size; i++)
    {
        if (i%2==1)
            cout << " ";

        for (int j = 0; j < size; j++)
        {
            if (grid[i][j] == 0)
                cout << "  ";
            else
                cout << grid[i][j] << " ";
        }
        cout << endl;
    }
// cout<<size;
return 0;
}