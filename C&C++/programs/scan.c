#include <stdio.h>
int main()
{
	char a,b;
	scanf(" %c      %c",&a,&b);
	printf("%c %c ",a,b);

	return 0;

}


// when there is no space betwen scan format specifier, then it takes the input of two character(and that character can be enter, space and tab).

// IF we give space between scanf format specifier, then it only takes input of two visible character, neglecting space, tab and enter.but this can take space in starting because we didn't give spacing at start of %d


//scanf(" %c      %c",&a,&b); in this space is given at start so tab/space at input start will also be negected
