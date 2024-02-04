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
*/
#include <stdio.h>
#include <string.h>
int leapOrNot(int year);
void display(int weekday, int month, int year);
int calWeekday(int month, int year);

const int daysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};


int main()
{
    int weekday, month, year;
    printf("Enter month and year(put space in between them):");
    scanf("%d %d", &month, &year);

    weekday = calWeekday(month, year);

    // printf("%d",weekday);
    display(weekday,month,year);

    return 0;
}

int calWeekday(int month,int year)
{
    //using 1/1/1900 monday as base
    int baseYear=1900, baseMonth=1,weekday=1;
    //To Solve: issue what if year is less then 1900
    if(year<baseYear)
    {
      while(baseYear!=year)
    {
        // printf("in 1 while");
        if(leapOrNot(baseYear--))
        {
            //366%7=2 that's why
            weekday-=2;
        }
        else
        {
            weekday--;
        }

        //weekday cycling from 1-7
        if(weekday<1)
        weekday+=7;
        
    }
   
    }
    else
    {
        //first lets see the 1/1/year weekday
    while(baseYear!=year)
    {
        // printf("in 1 while");
        if(leapOrNot(baseYear++))
        {
            //366%7=2 that's why
            weekday+=2;
        }
        else
        {
            weekday++;
        }

        //weekday cycling from 1-7
        if(weekday>7)
        weekday=weekday%7;
        
       
        
    }

    }
    
     //Now check the weekday of 1/month/year
    while(baseMonth!=month)
    {
        // printf("in 2 while");
        //months can be of 30, 31 or 28/29 days
        if(baseMonth ==2 && leapOrNot(baseYear))
        {
            //29%7=1
            weekday++;
        }
        else
        switch(daysInMonth[baseMonth-1])
        {
            case 31:weekday+=3;
            break;
            case 30:weekday+=2;
            break;
            // no need for case 28
        }

        if(weekday>7)
        weekday=weekday%7;

        baseMonth++;
    }
   
    return weekday;
}

int leapOrNot(int year)
{
    if(year%400==0)
    return 1;
    else if(year%100==0)
    return 0;
    else if(year%4==0)
    return 1;
    else 
    return 0;
}

void display(int weekday, int month, int year)
{
    char strMonth[20];
    int day=1;
    // printf("%d\n",weekday);
    switch(month)
    {
        case 1:strcpy(strMonth,"January");
        break;
        case 2:strcpy(strMonth,"February");
        break;
        case 3:strcpy(strMonth,"March");
        break;
        case 4:strcpy(strMonth,"April");
        break;
        case 5:strcpy(strMonth,"May");
        break;
        case 6:strcpy(strMonth,"June");
        break;
        case 7:strcpy(strMonth,"July");
        break;
        case 8:strcpy(strMonth,"August");
        break;
        case 9:strcpy(strMonth,"September");
        break;
        case 10:strcpy(strMonth,"October");
        break;
        case 11:strcpy(strMonth,"November");
        break;
        case 12:strcpy(strMonth,"December");
        break;
        
        
    }
    printf("\t\t  %s %d\n",strMonth,year);
    printf("Mon\tTue\tWed\tThu\tFri\tSat\tSun\n");
    for(int i=1;day<=daysInMonth[month-1];i++)
    {
         if(i%7==1 && i!=1)
        printf("\n");
        if(i<weekday)
        {
            printf("\t");
        }
        else
        {
            printf("%3d\t",day++);
        }

       
    }
    
}