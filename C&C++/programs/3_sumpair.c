#include <stdio.h>

int main()
{
    int arr[100], i = 0, size, flag = 0, sum;
    //intialise
    do
    {
        i++;
        printf("Enter the %d number(any char to stop): ", i);
    } while (scanf("%d", &arr[i - 1]));
    size = i - 1;
    printf("Enter the sum:");
    
    scanf(" %d", &sum); 

    for (i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if(sum==arr[i]+arr[j])
            {
            printf("first element:%d\nsecond element:%d\nsum=%d",arr[i],arr[j],sum);
            flag=1;
            break;
            }

        }
    }

    if(flag==0)
    printf("no such combination found in array");

    return 0;
}