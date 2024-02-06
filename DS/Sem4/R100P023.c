// Insert and display a linked list
#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
}Node;



Node *head = NULL;

void insertAtBeg(int data)
{
    // create new Node
    Node *tempP;
    tempP = (Node *)malloc(sizeof(Node));
    tempP->info = data;

    // link
    tempP->link = head;
    head = tempP;
}
void insertAtEnd(int data)
{
    // create new Node
    Node *tempP;
    tempP = (Node *)malloc(sizeof(Node));
    tempP->info = data;
    tempP->link = NULL;

    // traverse to end
    Node *tail = head;
    while (tail->link != NULL)
    {
        tail = tail->link;
    }

    // insert at tail
    tail->link = tempP;
}
void search(int data, Node **childP, Node **parentP)
{
    *childP = head;
    *parentP = NULL;
    while (*childP != NULL)
    {
        if ((*childP)->info == data)
        {
            break;
        }
        *parentP = *childP;
        *childP = (*childP)->link;
    }
}
void delete(int data)
{
    Node *child=NULL, *parent=NULL;
    if(head != NULL)
    search(data, &child, &parent);
    if (child != NULL && parent != NULL)
    {
        parent->link = child->link;
    }
    else if (parent == NULL)
    {
        head = head->link;
    }
    else
    {
        printf("Data not in the linked list");
    }
}
void display()
{
    // display
    Node *tempP = head;
    while (tempP != NULL)
    {
        printf("\e[01m%d -> ", tempP->info);
        if (tempP->link == NULL)
            printf("NULL\n\e[0m");
        tempP = tempP->link;
    }
}
int main()
{
    int choice, data;
    Node *tempP;
    while (1)
    {
        printf("---------------------\n");
        printf("1. Insert a element\n");
        printf("2. Insert at end\n");
        printf("3. search\n");
        printf("4. Delete a node\n");
        printf("5. Display linked list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1://Insert at beg.
            printf("Enter the data: ");
            scanf("%d", &data);
            insertAtBeg(data);
            break;

        case 2://Insert at End
            printf("Enter the data: ");
            scanf("%d",&data);
            insertAtEnd(data);
            break;

        case 3://search
            printf("Enter number to search: ");
            scanf("%d",&data);
            Node *parent, *child;
            search(data,&child,&parent);
            if(child != NULL)
            {
                printf("Found");
            }
            else
            {
                printf("Not Found");
            }
            break;

        case 4://Delete a node
            printf("Enter the data of the node: ");
            scanf("%d", &data);
            delete(data);
            break;

        case 5://display
            display();
            break;
        
        case 6://Exit
            return 0;

        default:
            printf("Enter valid choice");
        }
    }

    return 0;
}