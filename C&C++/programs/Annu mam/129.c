/*
In the file ‘CUSTOMER.DAT’ there are 100 records with the following structure:
struct customer
{
int accno ;
char name[30] ;
float balance ;
     } ;
In another file ‘TRANSACTIONS.DAT’ there are several records with the following structure:
struct trans
{
int accno ,
char trans_type ;
float amount ;
    } ;
The parameter trans_type contains D/W indicating deposit or withdrawal of amount. Write a program
to update ‘CUSTOMER.DAT’ file, i.e. if the trans_type is ‘D’ then update the balance of
‘CUSTOMER.DAT’ by adding amount to balance for the corresponding accno. Similarly, if trans_type is
‘W’ then subtract the amount from balance. However, while subtracting the amount make sure that
the amount should not get overdrawn, i.e. at least 100 Rs. Should remain in the account.
*/
#include <stdio.h>
#define CLR_SCR printf("\e[1;1H\e[2J");

int createAccount();
int trans();
struct customer
{
    int accno;
    char name[30];
    float balance;
};

struct trans
{
    int accno;
    char trans_type;
    float amount;
};

int main()
{
    char mode;
    FILE *fCustomer, *fTrans;
    fCustomer = fopen("customer.dat","a+");
    fTrans = fopen("transactions.dat","a");

    while (mode != 3)
    {
        CLR_SCR
        printf("\e[1mHOME PAGE\e[0m\n");
        printf("1. Create Account\n");
        printf("2. Make Transaction\n");
        printf("3. Exit\n");
        printf("Enter Your choice:");
        scanf("%hhd", &mode);

        switch (mode)
        {
        case 1:
            createAccount();
            break;
        case 2:
            trans();
            break;
        case 3:
            return 0;
        default:
            printf("\n\e[31mEnter valid input\e[0m");
            getchar();
            getchar();
        }
    }

    return 0;
}

int createAccount()
{
    struct customer person;
    CLR_SCR
    printf("Enter the name of Customer:");
    scanf("%[^\n",person.name);
    printf("Enter the balance you want at starting:");
    scanf("%d",person.balance);
    //generate unique sequential acc no. 
    
    printf("Your account no. is : %d",person.accno);
}
int trans()
{
}