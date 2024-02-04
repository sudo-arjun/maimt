#include <stdio.h>
#define size 5
// void sort(int *point);
// void insert(int *point, int n);
int main()
{
    int i = 0, arr[100],a;
    
    do
    {
         i++;
        printf("Enter the %d number:", i);
       
    
    } while (scanf("%d",&arr[i - 1]));
    fflush()
    printf("\n");

    printf("hello");
    scanf("%d",&a);
    scanf("%d",&i);

    // printf("%d",arr[49]);
    // sort(arr[0]);
    //  insert(arr,n);
    for (i = 0; i < 0; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}

// void sort(int *point)

// void insert(int *point,int n)
// {
//     int i,pos=-1, *point_size=point+size;
//     //find position
//     for(i=0;i<size;i++)
//     {
//         if(n<=*point)
//         {
//             pos=i;
//         }
//         else{
//             point++;
//         }
//     }
//     point--;
//     if(pos==-1)
//     {
//         pos=i+1;
//         point++;
//     }

//     //shift and insert at pos/point(address)
//     for(int j=size;j>=pos;j--)
//     {
//        *point_size=*(point_size-1);
//        point_size--;
//     }
//     *point_size=n;
// }
