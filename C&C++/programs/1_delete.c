#include <stdio.h>
#define size 8

int main()
{
   int n, i, pos = -1, arr[50] = {1, 2, 3, 4, 5, 434, 600, 700};

   printf("Enter the element to delete:");
   scanf("%d", &n);

   // TO find position of n
   for (i = 0; i < size; i++)
   {
      if (arr[i] == n)
      {
         pos = i;
         break;
      }
   }
   if (pos == -1)
      printf("element not found");

   // To delete at position at n

   for (i = pos; i < size; i++)
   {
      arr[i] = arr[i + 1];
   }

   // PRINT
   for (i = 0; i < size - 1; i++)
   {
      printf("%d ", arr[i]);
   }

   return 0;
}
