#include <stdio.h>

int main()
{
	char x,y,z;

	x = 'A';
	y = 'B';
	z = 'C';

	printf("It's as easy as %c%c%c\n",x,y,z);

	char c = x + 1;
	char d = x + 10;
	printf("value of c is %c\n", c);
	printf("value of d is %c\n", d);

	return(0);
}

