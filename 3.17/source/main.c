#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int accountnumber;
	double beginningbalance , totalcharges, totalcredits, creditslimit, outstanding;
	while (1)
	{
		printf("Enter account number (-1 to end): ");
		scanf_s("%d", &accountnumber);
		if (accountnumber == -1) break;

		printf("Enter beginning balance: ");
		scanf_s("%lf", &beginningbalance);
		printf("Enter total charges: ");
		scanf_s("%lf", &totalcharges);
		printf("Enter total credits: ");
		scanf_s("%lf", &totalcredits);
		printf("Enter credits limit: ");
		scanf_s("%lf", &creditslimit);

		outstanding = beginningbalance + totalcharges - totalcredits;
		if (outstanding > creditslimit)
		{
			printf("Account: %d\n", accountnumber);
			printf("Credit limit: %0.2lf\n", creditslimit);
			printf("Balance: %0.2lf\n", outstanding);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n\n");
	}

	system("puase");
	return 0;
}