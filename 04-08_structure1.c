#include <stdio.h>

int main()
{
	struct record {
		int account;
		float balance;
	};

    struct record my_bank;

    my_bank.account = 123456;
    my_bank.balance = 1234.56;

    printf("\nAccount details are - Account num : %d, and Balance : %f", my_bank.account, my_bank.balance);
	return(0);
}

