#include <stdio.h>

int main()
{
	unsigned int x = 3;
	long unsigned int y = 0;
	//printf("%u\n", ~x);
	printf("y=%lu  x=%u\n",y, x);

	// y = 4ul + (x++ + (~x));
	//y = ++x + x++ + ++x;
	y = x + x++ ;

	printf("y=%lu  x=%u", y, x);
}
