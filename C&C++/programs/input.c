#include <stdio.h>
/*if user enters any other character then number, it will terminate/break all the scanf following it.*/
int main()
{
    int a, b;
    char c;

    printf("START\n");
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the %d element: ", i + 1);
        scanf("%d", &a);
    }

    /*SOLUTIONS:*/
    //getchar();
    // scanf("%c",&c);
    // while(getchar()!='\n');

    printf("\nEnter a negative no: ");
    scanf("%d", &b);

    printf("\nEND\n");

    return 0;
}