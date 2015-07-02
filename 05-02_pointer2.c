#include <stdio.h>

int main()
{
	int pokey;
	int *p;

	pokey = 987;
	p = &pokey;

	printf("The address of `pokey` is %p\n",&pokey);
	printf("The contents of `pokey` are %d\n",pokey);

	printf("The address of `pokey` is %p\n",p);
	printf("The contents of `pokey` are %d\n",*p);


    char cpokey;
	char *cp;

	cpokey = 'a';
	cp = &cpokey;

	printf("The address of `cpokey` is %p\n",&cpokey);
	printf("The contents of `cpokey` are %c\n",cpokey);

	printf("The address of `cpokey` is %p\n",cp);
	printf("The contents of `cpokey` are %c\n",*cp);



	return(0);
}

