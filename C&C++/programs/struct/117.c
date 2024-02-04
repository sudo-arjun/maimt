#include <stdio.h>
struct date
{
    unsigned short day;
    unsigned short month;
    unsigned short year;
};

int main()
{
    struct date date1, date2;
    // read date 1
    printf("Enter the date(format:day month year):");
    scanf("%hu %hu %hu", &date1.day, &date1.month, &date1.year);
    // read date 2
    printf("Enter the date(format:day month year):");
    scanf("%hu %hu %hu", &date2.day, &date2.month, &date2.year);

    if (date1.day == date2.day && date1.month == date2.month && date1.year == date2.year)
    {
        printf("Equal");
    }
    else
    {
        printf("Unequal");
    }
    return 0;
}