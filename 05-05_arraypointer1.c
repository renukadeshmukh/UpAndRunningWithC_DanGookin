#include <stdio.h>

int main()
{
	int array[] = { 11, 13, 17, 19 };
	int x;

	int *aptr;
	aptr = array;

	for(x=0;x<4;x++)
	{
		printf("Element %d: %d\n",x+1,array[x]);
	}

    printf("\n");
    aptr = aptr + 2;
    *aptr = 21;
    for(x=0;x<4;x++)
	{
		printf("Element %d: %d\n",x+1,array[x]);
	}

	return(0);
}

