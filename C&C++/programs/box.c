/* add c headers if necessary*/
#include <stdio.h>
int main()
{
    int length, breadth;
    length=15;
    breadth=15;

    for(int column=1; column<=breadth; column++)
    {
    if (column==1||column==15)
    {for(int row=1; row<=length; row++)
    {printf("%d ",35);}
    }
     else{printf("%d%68d",35,35);}
    printf("\n");
    }
    return 0;
}
/* add tail for c if necessary*/