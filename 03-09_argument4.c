#include <stdio.h>

void evaluate(int x);

int main()
{
	int i;

	printf("Type an integer value: ");
	scanf("%d",&i);
	evaluate(i);

	return(0);
}

void evaluate(int x)
{
	if(x < 10)
        printf("\n %d is less than 10", x);
    else if (x > 10)
        printf("\n %d is greater than 10", x);
    else
        printf("\n %d is equal to 10" , x);
}

