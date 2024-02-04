// Find the smallest number in an array using pointers
#include <stdio.h>
int find_smallest (int *arrP, int size)
{
    int small = *arrP;
    printf("%d\n",arrP[0]);
    for(int i=0; i < size; i++)
    {
        if(small > *(arrP + i))
        {
            small = *(arrP + i);
        }
    }
    return small;
}
int main()
{
    int arr[100];
    int size;
    printf("Enter the size of the array(max 100):");
    scanf("%d",&size);

    if(size > 100)
    {
        printf("Can not be greater than 100");
        return 0;
    }

    for(int i = 0; i < size; i++)
    {
        printf("Enter the %d element:",i+1);
        scanf("%d",&arr[i]);
    }

    //Find smallest element
    printf("Smallest Element: %d",find_smallest(arr,size));
    
    return 0;
}
