/*
29. Design a Stack class and implement basic stack operations.
*/
#include <iostream>
using namespace std;
#define SIZE 100

class stack
{
    int arr[SIZE], top = -1;

public:
    void push(int element)
    {
        if (top == SIZE - 1)
            cout << "overflow";
        else
            arr[++top] = element;
        display();
    }
    int pop()
    {
        int item;
        if (top == -1)
            cout << "underflow";
        else
            item = arr[top--];

        display();

        return item;
    }
    void display()
    {
        for (int i = top; i >= 0; i--)
        {
            cout << arr[i] << endl;
        }
    }
};

int main()
{
    int choice,item;
    stack stack1;
    while(1)
    {
        cout<<"Stack Program\n1.push\n2.pop\n3.display\n4.exit\nEnter your choice:";
        cin>>choice;
        switch(choice)
        {
            case 1: 
                cout<<"Enter the element:";
                cin>>item;
                stack1.push(item);
                break;
            case 2: 
                item = stack1.pop();
                cout << "Element removed:" << item<<endl;
                break;
            case 3:
                stack1.display();
                break;
            case 4: 
                return 0;
            default:
                cout << "Enter the valid choice";
        }

    }
   
}