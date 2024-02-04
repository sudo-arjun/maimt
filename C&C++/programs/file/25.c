#include <stdio.h>

int main()
{
    int emp_time,overtime_pay;
    for(int i=1;i<=3;i++)
    {   
        printf("Enter the working time for %d employee:",i);
        scanf("%d",&emp_time);
        emp_time-=40;
        if(emp_time>0)
        overtime_pay=emp_time*12;
        else 
        overtime_pay=0;
        printf("Overtime pay for %d employee:%d\n",i,overtime_pay);
    }
    return 0;
}