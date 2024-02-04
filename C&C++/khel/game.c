#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
//#include <ncurses.h>
#include <termios.h>
#include <fcntl.h>
//#include <math.h>

void construct(int, int);
void change_food(int *, int *);
void head_movement(int *);
void key_press(int *);
long int power(int, int);
int kbhit();

int length = 30, height = 30, out = 0, score = 0, food, mid_h, mid_l, yaxis = 7, xaxis = 7;
long int direction_int = 0, row_int, col_int;

int main()
{
    int direction = 1;

    // printf("Enter the length and height of the box:");
    // scanf("%d %d", &length, &height);
    mid_h = height / 2;
    mid_l = length / 2;

    // change_food(&xaxis, &yaxis);

    while (out == 0)
    {

        food = score / 100;
        usleep(300000);
        printf("\e[1;1H\e[2J");
        construct(length, height);
        key_press(&direction);
        head_movement(&direction);
        if (food)
        {
            direction_int = direction_int * 10 + direction;
            direction_int = direction_int % power(10, food);
        }
        switch (direction)
        {
        case 1:
            row_int = row_int * 100 + mid_h--;
            break;
        case 3:
            row_int = row_int * 100 + mid_h++;
            break;
        default:
            row_int=row_int * 100 + mid_h;
        }
        switch (direction)
        {
        case 2:
            col_int = col_int * 100 + mid_l++;
            break;
        case 4:
            col_int = col_int * 100 + mid_l--;
            break;
        default:
            col_int=col_int * 100 + mid_h;
        }
        row_int=row_int%power(10,food);
        col_int=col_int%power(10,food);

        if (mid_h == yaxis && mid_l == xaxis)
        {
            change_food(&xaxis, &yaxis);
            score += 100;
        }
        if (mid_h == 1 || mid_h == height || mid_l == 1 || mid_l == length)
        {
            out = 1;
        }
    }

    return 0;
}

void construct(int length, int height)
{
    int i, j;

    for (i = 1; i <= height; i++)
    {

        for (j = 1; j <= length; j++)
        {

            if (i == 1 || j == 1 || i == height || j == length)
            {
                printf("25");
            }

            else if (j == mid_l && i == mid_h)
            {

                printf("%c ", 64);
            }

            else if (yaxis == i && xaxis == j)
            {
                printf("* ");
            }

            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("Your score:%d", score);
    printf("\n%ld", direction_int);
    printf("\n%ld %ld",row_int,col_int);
}

void change_food(int *x, int *y)
{
    int a, b, flag1 = 1, flag2 = 1;

    while (flag1)
    {
        a = rand() % length;
        if (a > 1)
        {
            *x = a;
            flag1 = 0;
        }
    }
    while (flag2)
    {
        b = rand() % height;
        if (b > 1)
        {
            *y = a;
            flag2 = 0;
        }
    }
}

void head_movement(int *direc)
{
    switch (*direc)
    {
    case 1:
        mid_h--;
        break;
    case 2:
        mid_l++;
        break;
    case 3:
        mid_h++;
        break;
    case 4:
        mid_l--;
        break;
    }
}

void key_press(int *direc)
{
    char key;
    if (kbhit())
    {
        scanf("%c", &key);
        switch (key)
        {
        case 'w':

            *direc = 1;
            break;
        case 'a':

            *direc = 4;
            break;
        case 's':

            *direc = 3;
            break;
        case 'd':

            *direc = 2;
            break;
        }
    }
}

void tail()
{
}

long int power(int a, int b)
{
    long int product = 1;

    for (int i = 1; i <= b; i++)
    {
        product *= a;
    }
    return product;
}

int kbhit(void)
{
    struct termios oldt, newt;
    int ch;
    int oldf;

    tcgetattr(STDIN_FILENO, &oldt);
    newt = oldt;
    newt.c_lflag &= ~(ICANON | ECHO);
    tcsetattr(STDIN_FILENO, TCSANOW, &newt);
    oldf = fcntl(STDIN_FILENO, F_GETFL, 0);
    fcntl(STDIN_FILENO, F_SETFL, oldf | O_NONBLOCK);

    ch = getchar();

    tcsetattr(STDIN_FILENO, TCSANOW, &oldt);
    fcntl(STDIN_FILENO, F_SETFL, oldf);

    if (ch != EOF)
    {
        ungetc(ch, stdin);
        return 1;
    }

    return 0;
}
