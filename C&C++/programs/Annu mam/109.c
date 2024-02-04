/*
Develop a program that receives the month and year from the keyboard as integers and prints the
calendar in the following format.
March 2006
Mon Tue Wed Thu Fri Sat Sun
         1  2   3   4    5
6   7   8   9   10  11  12
13  14  15  16  17  18  19
20  21  22  23  24  25  26
27  28  29  30  31

Note that according to the Gregorian calendar 01/01/1900 was Monday. With this as the base the
calendar should be generated.

Modify the above program suitably so that once the calendar for a particular month and year has been
displayed on the screen, then using arrow keys the user must be able to change the calendar in the
following manner:

Up arrow key   : Next year, same month
Down arrow key  : Previous year, same month
Right arrow key  : Same year, next month
Left arrow key  : Same year, next month
If the escape key is hit then the procedure should stop.
Hint: Use the getkey( ) function discussed in Chapter 8
*/
#include <stdio.h>
#include <string.h>

int leapOrNot(int year);
void display(int weekday, int month, int year);
int calWeekday(int month, int year);
int getKey();
const int daysInMonth[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    int weekday, month, year, ch = 0;
    printf("Enter month and year(put space in between them):");
    scanf("%d %d", &month, &year);
    do
    {
        printf("\e[1;1H\e[2J");
        switch (ch)
        {
        // up
        case 1:
            year++;
            break;
        // right
        case 2:
            month++;
            if(month>12)
            month=1;
            break;
        // down
        case 3:
            year--;
            break;
        // left
        case 4:
            month--;
              if(month<1)
            month=12;
           
        }

        weekday = calWeekday(month, year);
        // printf("%d",weekday);
        display(weekday, month, year);

    } while ((ch = getKey()) != -1);

    return 0;
}

int calWeekday(int month, int year)
{
    // using 1/1/1900 monday as base
    int baseYear = 1900, baseMonth = 1, weekday = 1;
    // To Solve: issue what if year is less then 1900
    if (year < baseYear)
    {
        while (baseYear != year)
        {
            // printf("in 1 while");
            if (leapOrNot(baseYear--))
            {
                // 366%7=2 that's why
                weekday -= 2;
            }
            else
            {
                weekday--;
            }

            // weekday cycling from 1-7
            if (weekday < 1)
                weekday += 7;
        }
    }
    else
    {
        // first lets see the 1/1/year weekday
        while (baseYear != year)
        {
            // printf("in 1 while");
            if (leapOrNot(baseYear++))
            {
                // 366%7=2 that's why
                weekday += 2;
            }
            else
            {
                weekday++;
            }

            // weekday cycling from 1-7
            if (weekday > 7)
                weekday = weekday % 7;
        }
    }

    // Now check the weekday of 1/month/year
    while (baseMonth != month)
    {
        // printf("in 2 while");
        // months can be of 30, 31 or 28/29 days
        if (baseMonth == 2 && leapOrNot(baseYear))
        {
            // 29%7=1
            weekday++;
        }
        else
            switch (daysInMonth[baseMonth - 1])
            {
            case 31:
                weekday += 3;
                break;
            case 30:
                weekday += 2;
                break;
                // no need for case 28
            }

        if (weekday > 7)
            weekday = weekday % 7;

        baseMonth++;
    }

    return weekday;
}

int leapOrNot(int year)
{
    if (year % 400 == 0)
        return 1;
    else if (year % 100 == 0)
        return 0;
    else if (year % 4 == 0)
        return 1;
    else
        return 0;
}

void display(int weekday, int month, int year)
{
    char strMonth[20];
    int day = 1;
    // printf("%d\n",weekday);
    switch (month)
    {
    case 1:
        strcpy(strMonth, "January");
        break;
    case 2:
        strcpy(strMonth, "February");
        break;
    case 3:
        strcpy(strMonth, "March");
        break;
    case 4:
        strcpy(strMonth, "April");
        break;
    case 5:
        strcpy(strMonth, "May");
        break;
    case 6:
        strcpy(strMonth, "June");
        break;
    case 7:
        strcpy(strMonth, "July");
        break;
    case 8:
        strcpy(strMonth, "August");
        break;
    case 9:
        strcpy(strMonth, "September");
        break;
    case 10:
        strcpy(strMonth, "October");
        break;
    case 11:
        strcpy(strMonth, "November");
        break;
    case 12:
        strcpy(strMonth, "December");
        break;
    }
    printf("\t\t  %s %d\n", strMonth, year);
    printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    for (int i = 1; day <= daysInMonth[month - 1]; i++)
    {
        if (i % 7 == 1 && i != 1)
            printf("\n");
        if (i < weekday)
        {
            printf("\t");
        }
        else
        {
            printf("%3d\t", day++);
        }
    }
    printf("\n");
}

int getKey()
{
    int ch;

#ifdef LINUX
    // getkey for linux (incomplete)

    ch = getch();
    switch (ch)
    {
    case KEY_UP:
        return 1;
    case KEY_DOWN:
        return 3;
    case KEY_LEFT:
        return 4;
    case KEY_RIGHT:
        return 2;
    case 27:
        return -1;
    default:
        return 0;
    }

#else
#include <conio.h>
    ch = getch();

    if (ch == 0 || ch == 224)
    { // Handle extended key sequences

        ch = getch();
        switch (ch)
        {
        case 72:
            return 1;
        case 80:
            return 3;
        case 75:
            return 4;
        case 77:
            return 2;
        default:
            return 0;
        }
    }
    else if (ch == 27)
        return -1;

#endif
}
