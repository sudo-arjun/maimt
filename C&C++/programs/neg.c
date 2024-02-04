#include <stdio.h>
int main()
{
	int a[10], i, n, j, temp;

	printf("enter the size of array");
	scanf("%d", &n);
	temp = n;
	for (i = 0; i < n; i++)
	{
		printf("enter the element of array");
		scanf("%d", &a[i]);
	}

	// logic to delete neg element
	for (i = n - 1; i >= 0; i--)
	{
		if (a[i] < 0)
		{
			for (j = i; j < n; j++)
			{
				a[j] = a[j + 1];
			}

			n--;
		}
	}

	// print
	if (n == temp)
	{
		printf("no neg elements");
	}
	else if (n == 0)
	{
		printf("all are negative elements");
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			printf("%d ", a[i]);
		}
	}
	return 0;
}
