#include <stdio.h>
#include <string.h>
int main()
{
	char first[] = "I would like to go ";
	char second[] = "from here to there\n";

    char concat[64];

    strcpy(concat, first);
    strcat(concat,second);

    printf("Concatenation of the two strings is :: \n%s", concat);

	return(0);
}

