#include <stdio.h>

int main()
{
    int arr[100], i = 0, size, flag = 0;
    // intialise
    do
    {
        i++;
        printf("Enter the %d number: ", i);
    } while (scanf("%d", &arr[i - 1]));

    size = i - 1;

    for (i = 0; i < size; i++)
    {
      
        if (arr[i] == -1)
            continue;

        flag = 0;
        
        //replace duplictes with -1
        for (int j = i+1; j < size; j++)
        {
            if (arr[i] == arr[j])
            {
                arr[j] = -1;
                flag = 1;
            }
        }
        
        //only print when no duplicate found 
        if (flag == 0)
        printf("%d ", arr[i]);
    
    }


    return 0;
}