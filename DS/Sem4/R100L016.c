/*
16.	Implement circular queue using array
    Insert an element
    Delete an element
    Display all the elements

*/
#include <stdio.h>
#define SIZE 5
int insert(int *queue,int *frontPtr,int *rearPtr,int num)
{
    //overflow
    if(*frontPtr == *rearPtr+1 || (*frontPtr == 0 && *rearPtr == SIZE-1))
        return 0;
    else
    {
        if(*rearPtr == -1)
        {
            *frontPtr = *rearPtr = 0;
        }
        else if(*rearPtr == SIZE-1)
        {
            *rearPtr = 0;
        }
        else
        {
            (*rearPtr)++;
        }
        queue[*rearPtr] = num;
        return 1;
    }
}
void delete(int *queue, int *frontPtr, int *rearPtr)
{
    //underflow
    if(*frontPtr == -1)
    {
        printf("UnderFLow condition, the queue is already empty\n");
    }
    else
    {
        printf("%d element removed from queue",queue[*frontPtr]);
        //Just increment the front
        //****************order matter
        if(*frontPtr == *rearPtr )
            *frontPtr = *rearPtr = -1;
        else if(*frontPtr == SIZE-1)
            *frontPtr = 0;
        else   
            (*frontPtr)++;
    }
}
void display(int *queue, int front, int rear)
{
    if(front != -1)
    do{
        if(front == SIZE)
            front = 0;
        printf("%d ",queue[front++]);
    }while(rear+1 != front);

    // for(int i=0;i<SIZE;i++)
    // printf("\n%d ",queue[i]);
}

int main()
{
    int queue[SIZE], front = -1, rear = -1,choice,num;
    while (1)
    {
        printf("\n-----------------\n");
        printf("Queue Program:\n");
        printf("1.Insert\n");
        printf("2.Delete\n");
        printf("3.Display\n");
        printf("4.Exit\n");
        printf("Enter the choice:");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Insert
            printf("Enter the number to Insert:");
            scanf("%d", &num);
            insert(queue,&front,&rear,num) ? printf("Successfully Inserted\n") : printf("Failed to Insert(Not enough space)\n");
            display(queue,front,rear);
            // printf("\n%d-%d\n",front,rear);
            break;
        case 2: // Delete
            delete(queue,&front,&rear);
            // printf("\n%d-%d\n",front,rear);
            if (front != -1)
                display(queue,front,rear);
            break;
        case 3: // display
            display(queue,front,rear);
            break;
        case 4: // Exit
            return 0;
        default:
            printf("Enter Valid Choice");
        }
    }
}