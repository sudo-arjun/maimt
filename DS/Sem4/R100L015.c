/*
Menu driven program of stack
1.push
2.pop
3.display
4.exit
*/
#include <stdio.h>
#define MAX 2
int push(int n);
void pop();
void display();

int stack[MAX], top = -1;

int main()
{
    int choice, num;
    while (1)
    {
        printf("-----------------\n");
        printf("Stack Program:\n");
        printf("1.Push\n");
        printf("2.Pop\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // push
            printf("Enter the number to push:");
            scanf("%d", &num);
            push(num) ? printf("Successfully Pushed\n") : printf("Failed to push(Not enough space)\n");
            display();
            break;
        case 2: // pop
            pop();
            if(top>=0)
            display();
            break;
        case 3: // display
            display();
            break;
        case 4: // Exit
            return 0;
        default:
            printf("Enter Valid Choice");
        }
    }
}

int push(int num)
{
    if (top < MAX-1)
    {
        top++;
        stack[top] = num;
        return 1;
    }
    else
        return 0;
}

void pop()
{
    if (top >= 0)
    {
        printf("%d poped out\n",stack[top]);
        top--;
    }
    else
    {
        printf("Can't pop, the stack is empty\n");
    }
}

void display()
{
    if (top >= 0)
    {
        printf("DISPLAY:-\n");
        for (int i = top; i >=0; i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    else 
        printf("Stack is empty\n");
}
