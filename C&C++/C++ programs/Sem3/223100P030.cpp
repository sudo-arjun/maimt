/*
30. Design a  Queue class and implement basic stack operations.
*/
#include <iostream>
using namespace std;
#define SIZE 100

class queue
{
    int arr[SIZE], front = -1, rear = -1;

public:
    void insert(int element)
    {
        if (rear == SIZE - 1)
            cout << "overflow";
        else
        {
           if(front==-1)
           front++;

           arr[++rear]=element;
        }
        display();
    }
    int del()
    {
        int item=-1;
        if (front == -1)
            cout << "underflow";
        else
        {
            item = arr[front++];
            if(rear==front-1)
                front=rear=-1;
        }

        display();

        return item;
    }
    void display()
    {
        for (int i = front; i <=rear && front!=-1; i++)
        {
            cout << arr[i] << " ";
        }
        cout<<endl;
    }
};

int main()
{
    int choice, item;
    queue queue1;
    while (1)
    {
        cout << "Queue Program\n1.insert\n2.delete\n3.display\n4.exit\nEnter your choice:";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Enter the element:";
            cin >> item;
            queue1.insert(item);
            break;
        case 2:
            item = queue1.del();
            cout << "Element removed:" << item << endl;
            break;
        case 3:
            queue1.display();
            break;
        case 4:
            return 0;
        default:
            cout << "Enter the valid choice";
        }
    }
}