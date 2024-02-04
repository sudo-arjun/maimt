#include <stdio.h>

int main()
{ int arr[100], i = 0, size, flag = 0, sum,dynamic_size,x;
    //intialise
    do
    {
        i++;
        printf("Enter the %d number(any char to stop): ", i);
    } while (scanf("%d", &arr[i - 1]));
    size = i - 1;
    dynamic_size=size;
    
    return 0;
}