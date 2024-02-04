#include <stdio.h>
#include <stdlib.h>
#define CLR_BUF while (getchar() != '\n')
struct customer
{
    unsigned int acc_no;
    char name[20];
    float balance;
};
// void enter_data();
void view_less(struct customer a[]);
void trans(struct customer a[], unsigned *acc, float amount, int *code);

int main()
{
    char mode;
    unsigned acc;
    int code;
    float amount;
    struct customer a[200] = {
        {100100, "chetan", 20000},
        {100101, "mohan", 10000},
        {100102, "rahul", 1000},
        {100103, "appy appy", 100},
        {100104, "happy", 10},
    };

    while (1)
    {
        system("clear");
        printf("\tHome Page\n");
        printf("Press 'a' to get balance less than Rs100\n");
        printf("Press 'b' for withdrawal/deposit\n");
        printf("Enter:");
       
        scanf("%c", &mode);
        CLR_BUF;
        /*this is switch*/
        switch (mode)
        {
        case 'a':
            view_less(a);
            break;
        case 'b':
            system("clear");
            printf("Account no:");
            scanf("%u", &acc);
            printf("Amount:");
            scanf("%f", &amount);
            printf("code(1 for deposit,0 for withdrawal):");
            scanf("%d", &code);
            trans(a, &acc, amount, &code);
            break;
        default:
            return 0;
        }
    }

    return 0;
}
void view_less(struct customer a[])
{
    system("clear");
    printf("Account no.\tName\n");
    for (int i = 0; i < 200 && a[i].acc_no != 0; i++)
    {
        if (a[i].balance < 100)
        {
            printf("%u\t\t%s\n", a[i].acc_no, a[i].name);
        }
    }
    getchar();
     CLR_BUF;

}
void trans(struct customer a[], unsigned *acc, float amount, int *code)
{

    for (int i = 0; i < 200 && a[i].acc_no != 0; i++)
    {
        if (*acc == a[i].acc_no)
        {
            if (*code == 1)
            {
                a[i].balance += amount;
                printf("\nsuccess");
            }
            else if (*code == 0 && a[i].balance > amount)
            {
                a[i].balance -= amount;
                printf("\nsuccess");
            }
            else
                printf("\nThe balance is insufficient");
        }
    }
    CLR_BUF;
    getchar();

}