/*
    Music Player using doubly linklist
    operations :
    1. Insert a new song
    2. Delete a song
    3. Display all song
    4. Play next song
    5. Play prev song
    6. Play particular song
    7. change pos of song
    8. Play first song
    9. Repeat - on/off
    10. Quit
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// #include <windows.h>

int total_song = 0;

int insert_song();
int delete_song();
int display();

struct song
{
    char song_name[50];
    char singer_name[50];
    char genre[50];
};

struct node
{
    struct song *data;
    struct node *prev;
    struct node *next;
};

struct node *head = NULL, *tail = NULL;

int main()
{
    int choice = 1, status = 1;

    while (choice != 10)
    {
        printf("1-> Insert a new song\t\t2-> Delete a song\n");
        printf("3-> Display all song\t\t4-> Play next song\n");
        printf("5-> Play previous song\t\t6-> Play particular song\n");
        printf("7-> change position\t\t8-> Play first song\n");
        printf("9-> Reapeat - On/Off\t\t10-> Exit\n\n");
        scanf("%d", &choice);
        fflush(stdin);

        switch (choice)
        {
        case 1:
            // system("cls");
            total_song++;
            status = insert_song();
            if (status == 1)
            {
                printf("Song Added\n");
            }
            else
            {
                printf("Song not Added\n");
            }
            break;

        case 3:
            // system("cls");
            status = display();
            if (status == 0)
            {
                printf("Playlist is Empty\n");
                break;
            }
            break;

        default:
            // system("cls");
            printf("Enter Valid choice\n");
            break;
        }
    }
    return 0;
}

int insert_song()
{
    struct node *new_song;
    new_song = (struct node *)malloc(sizeof(struct node));

    printf("Enter Song Name : ");
    gets(new_song->data->song_name);
    printf("Enter Singer Name : ");
    gets(new_song->data->singer_name);
    printf("Enter Genre : ");
    gets(new_song->data->genre);
    printf("\n");

    if (head == NULL)
    {
        head = new_song;
        new_song->prev = head;
        new_song->next = head;
        tail = new_song;
        return 1;
    }
    else
    {
        tail->next = new_song;
        new_song->prev = tail;
        new_song->next = head;
        tail = new_song;
        return 1;
    }
    return 0;
}

int display()
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));

    if (head == NULL)
    {
        return 0;
    }
    else
    {
        temp = head;
        printf("All Songs\n");
        printf("Total Songs : %d\n\n", total_song);
        printf("song : %s\n", temp->data->song_name);
        printf("Singer : %s\t", temp->data->singer_name);
        printf("Genre : %s\n", temp->data->genre);
        printf("\n");
        temp = temp->next;
        while (temp != head)
        {
            printf("song : %s\n", temp->data->song_name);
            printf("Singer : %s\t\t", temp->data->singer_name);
            printf("Genre : %s\n", temp->data->genre);
            printf("\n");
            temp = temp->next;
        }
        return 1;
    }
    return 0;
}