#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int day;
	double principal, rate,interest;
	while (1)
	{
		printf("Enter loan principal (-1 to end): ");
		scanf_s("%lf", &principal);
		if (principal == -1) break;
		printf("Enter interest rate:");
		scanf_s("%lf", &rate);
		printf("Enter term of the loan in days: ");
		scanf_s("%d", &day);
		interest = principal * rate * day / 365;
		printf("The interest change is $%lf \n\n\n", interest);
	}
	system("pause");
	return 0;
}