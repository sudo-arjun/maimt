#include <stdio.h>
int main()
{
    unsigned int quantity ;
    float rate, discount, total;
    discount=0.0;
    //printf("Enter the quantity:");
    scanf("%u",&quantity);

    //printf("Enter the rate:");
    scanf("%f",&rate);

    if(quantity>1000)
    {discount=0.1;}
    
    total=quantity*rate - quantity*rate*discount;

    printf("\nYour cost of %u is %.2f",quantity,total);
    
 
    return 0;
}