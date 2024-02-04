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
void bubble_sort();
long int power(int, int);
int kbhit();

int length = 30, height = 30, out = 0, score = 0, food, mid_h, mid_l, yaxis = 7, xaxis = 7;
 long int direction_int = 0, row_int, col_int,sorted_row,sorted_col;

int main()
{
    int direction = 1, speed=290000;

    // printf("Enter the length and height of the box:");
    // scanf("%d %d", &length, &height);
    mid_h = height / 2;
    mid_l = length / 2;

    // change_food(&xaxis, &yaxis);

    while (out == 0)
    {

        food = score / 100;
        if(food>=8)
        {
            food=8;
        }
        usleep(speed);
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
            row_int = row_int * 100 + mid_h + 1;
            break;
        case 3:
            row_int = row_int * 100 + mid_h - 1;
            break;
        default:
            row_int = row_int * 100 + mid_h;
        }
        switch (direction)
        {
        case 2:
            col_int = col_int * 100 + mid_l - 1;
            break;
        case 4:
            col_int = col_int * 100 + mid_l + 1;
            break;
        default:
            col_int = col_int * 100 + mid_l;
        }
        row_int = row_int % power(100, food);
        col_int = col_int % power(100, food);

        if(food>1)
        bubble_sort();
        else if(food ==1)
        {
            sorted_col=col_int;
            sorted_row=row_int;
        }

        if (mid_h == yaxis && mid_l == xaxis)
        {
            change_food(&xaxis, &yaxis);
            score += 100;
            speed -= 10000;
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
                printf("10");
            }

            else if (j == mid_l && i == mid_h)
            {
               
               //printf(“\033[0;32m”);
                printf("\e[1;33m%c%c\x1B[0m",64,64);
                  //printf(“\033[0m”);


            }

            else if(j==sorted_col%100 && i==sorted_row%100)
            {

                sorted_col/=100;
                sorted_row/=100;
                printf("\x1B[33moo\x1B[0m");
            }

            else if (yaxis == i && xaxis == j)
            {
                printf("\e[1;32m$$\x1b[0m");
            }

            else
            {
                printf("  ");
            }
        }

        printf("\n");
    }

    printf("\e[1;91m\t\t\tYour score:%d\n\x1b[0m", score);
    // printf("\n%ld", direction_int);
    // printf("\n%ld %ld", row_int, col_int);
    // printf("\n%ld %ld",sorted_row,sorted_col);
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

void bubble_sort()
{
    int temp_food = food,count=food-1, x, y, z, xc, yc ;
    long int multiplier = 1, condition_y, condition_yc,temp_row, temp_col, sort_row = row_int, sort_col = col_int;

    while (temp_food - 1) // passes
    {

        temp_row = sort_row;
        temp_col = sort_col;
        sort_col = 0;
        sort_row = 0;
        temp_food--;
        
        count=food-1;
        multiplier=1;
        condition_y=0;
        condition_yc=0;

       
        while (count)//sorting each element one by one
        {
            x = temp_row % 100;
            temp_row /= 100;
            y = temp_row % 100;

            xc = temp_col % 100;
            temp_col /= 100;
            yc = temp_col % 100;
            if (x > y)
            { // swap
                z = x;
                x = y;
                y = z;

                z = xc;
                xc = yc;
                yc = z;

                temp_row /= 100;
                temp_row = temp_row * 100 + y;
                temp_col /= 100;
                temp_col = temp_col * 100 + yc;
            }
            else if (x == y && xc > yc)
            {

                // swap
                z = x;
                x = y;
                y = z;

                z = xc;
                xc = yc;
                yc = z;

                temp_row /= 100;
                temp_row = temp_row * 100 + y;
                temp_col /= 100;
                temp_col = temp_col * 100 + yc;
            }
            if (count == 1)
            {
                condition_y = y * multiplier * 100;
                condition_yc = yc * multiplier * 100;
            }

            sort_row = sort_row + x * multiplier + condition_y;
            sort_col = sort_col + xc * multiplier + condition_yc;

            multiplier *= 100;
            count--;
        }
   
    }

    sorted_col=sort_col;
    sorted_row=sort_row;
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

int kbhit()
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
