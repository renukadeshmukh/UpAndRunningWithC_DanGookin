#include <stdio.h>

int main()
{
	char a;

	puts("Vacation options:");
	puts("A - Airfare");
	puts("B - Hotel");
	puts("C - Rental Car");
	scanf("%c",&a);

	switch(a)
	{
		case 'A':
        case 'a':
			puts("You have selected the airfare");
			break;
		case 'B':
        case 'b':
            puts("You have selected the hotel");
			break;
		case 'C':
        case 'c':
			puts("You have selected the rental car");
			break;
		default:
			puts("Invalid choice.");
	}

	return(0);
}

