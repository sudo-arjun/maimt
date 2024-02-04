#include <stdio.h>
#include <stdlib.h>
#define CLR_BUF while (getchar() != '\n') 
struct library
{
    int accession_no;
    char title[20];
    char author[20];
    int price;
    int flag;
};
void add_info();
void display_all();
void display_via_author();
void display_title();
void list_order_accession();
struct library arr[500]={0};
int main()
{
    int mode;

    while (1)
    {
        system("clear");
        printf("\tHome page\n1. Add book information\n2. Display book information\n3. List all books of given author\n4. List the title of specified book\n5. List the count of books in the library\n6. List the books in the order of accession number\n7. Exit\n");
        scanf("%d", &mode);
        switch (mode)
        {
        case 1:
            add_info();
            break;
        case 2:
            display_all();
            break;
        case 3:
        
            break;
        case 4:
        case 5:
        case 6:
        case 7:
            return 0;
        }
    }

    return 0;
}
void add_info()
{
    static int i;
    char flag='\n';
    for (i = 0; i < 500 && flag=='\n'; i++)
    {
        system("clear");
        printf("\tAdd book info\n");
        printf("Title of book:");
        scanf("%s", arr[i].title);
        printf("Author:");
        scanf("%s", arr[i].author);
        printf("price:");
        scanf("%d", &arr[i].price);
        printf("Accession number:");
        scanf("%d", &arr[i].accession_no);
        printf("Issued or not:");
        scanf("%d", &arr[i].flag);
        CLR_BUF;
        printf("Want to continue(just press enter):");
        flag=getchar();
    }
}
void display_all()
{
    system("clear");
    printf("\tBooks Info\n");
    printf("Accession no.\tBook name\tAuthor name\tPrice\tissued\n");
    for(int i = 0;i<400 && arr[i].accession_no!=0;i++)
    {
        
        printf("%d\t\t%s\t\t%s\t\t%d\t%d\n",arr[i].accession_no,arr[i].title,arr[i].author,arr[i].price,arr[i].flag);
 
    }
    CLR_BUF;
    getchar();
}
void display_via_author();
void display_title();
void list_order_accession();