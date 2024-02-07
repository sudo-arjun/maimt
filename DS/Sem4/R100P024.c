/*
. Write a program to perform following operations on sorted linked list:
· Insert a node in sorted linked list
· Search a node in sorted linked list
· Delete a node from the sorted linked list
· Display values of all the node
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int info;
    struct node *link;
} Node;

Node *head = NULL;

void insert(int);
Node *search(int, Node**);
void delete(int data);
void display();

int main()
{
    int choice, data;
    while (1)
    {
        printf("---------------------\n");
        printf("1. Insert a element\n");
        printf("2. search\n");
        printf("3. Delete a node\n");
        printf("4. Display linked list\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1: // Insert at beg.
            printf("Enter the data: ");
            scanf("%d", &data);
            insert(data);
            break;

        case 2: // search
            printf("Enter number to search: ");
            scanf("%d", &data);
            Node *parent, *result;
            result = search(data, &parent);
            result == NULL ? printf("Not found!\n") : printf("%d Found in linked list!\n",result -> info);
            break;

        case 3: // Delete a node
            printf("Enter the data of the node: ");
            scanf("%d", &data);
            delete (data);
            break;

        case 4: // display
            display();
            break;

        case 5: // Exit
            return 0;

        default:
            printf("Enter valid choice");
        }
    }

    return 0;
}


void insert(int data)
{
    // create new Node
    Node *newNode;
    newNode = (Node *)malloc(sizeof(Node));
    newNode->info = data;

    // find node after which new Node has to be inserted
    Node *temp = head, *save = NULL;
    while (temp != NULL && temp->info < data)
    {
        save = temp;
        temp = temp->link;
    }

    // link
    if (save != NULL)
    {
        newNode->link = save->link;
        save->link = newNode;
    }
    else
    {
        newNode->link = head;
        head = newNode;
    }
}

Node *search(int data, Node **parent)
{
    Node *temp;
    for (temp = head; temp != NULL && temp->info < data; temp = temp->link)
    {
        if (parent != NULL)
            *parent = temp;
    }

    if (temp == NULL || temp->info != data)
        return NULL;
    else
        return temp;
}

void delete(int data)
{
    Node *toBeDeleted = NULL, *parent = NULL;
    toBeDeleted = search(data, &parent);

    if (toBeDeleted == NULL)
    {
        printf("Not Found\n");
        return;
    }
    else if (parent == NULL)
    {
        head = head->link;
    }
    else
    {
        parent->link = toBeDeleted->link;
    }

    printf("%d element deleted\n", toBeDeleted->info);
    display();
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
