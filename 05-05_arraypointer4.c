#include <stdio.h>

int main()
{
	char *string = "I'm just a normal string.\n";
	char * ptr;
	ptr = string;
	int x = 0;

	while(*ptr)
	{
		putchar(*ptr);
		ptr++;
	}

	return(0);
}

