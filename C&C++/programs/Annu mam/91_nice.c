/*
Implement the following procedure to generate prime numbers from 1 to 100 into a program. This 
procedure is called sieve of Eratosthenes. 
Step 1: Fill an array num[100] with numbers from 1 to 100 
Step 2: Starting with the second entry in the array, set all its multiples to zero. 
Step 3: Proceed to the next non-zero element and set all its multiples to zero. 
Step 4: Repeat step 3 till you have set up the multiples of all the non-zero elements to zero 
Step 5: At the conclusion of step 4, all the non-zero entries left in the array would be prime numbers, so 
print out these numbers. 
*/
#include <stdio.h>
#define SIZE 100

int main()
{
    int num[SIZE];
    for(int i=0;i<SIZE;i++)
    num[i]=i+1;

    for(int i=1;i<SIZE;i++)
    {
        if(num[i]!=0)
        {
            for(int j=i+1;j<SIZE;j++)
            {
                if(num[j]%num[i]==0)
                num[j]=0;
            }
        }
    }

    for(int i=1;i<SIZE;i++){
        if(num[i]!=0)
        printf("%d\n",num[i]);
    }


    return 0;
}