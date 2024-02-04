/* add c headers if necessary*/
#include <stdio.h>
int main()
{
    int math, chem, phy, eng,comp, percent;
    printf("Enter the marks of maths:");
    scanf("%d",&math);
    printf("Enter the marks of chemistry:");
    scanf("%d",&chem);
    printf("Enter the marks of physics:");
    scanf("%d",&phy);
    printf("Enter the marks of english:");
    scanf("%d",&eng);
    printf("Enter the marks of computer:");
    scanf("%d",&computer);

    percent=math+chem+phy+eng+comp/5;

    if(math>30&& phy>30 && eng>30 && chem>30 && comp>30 && percent>35)
    {
        printf("You are passed");
    }
    else{printf("You are failed");}
    return 0;
}
/* add tail for c if necessary*/
