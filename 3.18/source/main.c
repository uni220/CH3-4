#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	float salesindollars,C;
	
	
	while (1)
	{
		printf("Enter sales in dollars(-1 to end): ");
		scanf_s("%f", &salesindollars);
		if (salesindollars == -1) break;
		C= 200+ salesindollars *0.09;
		printf("Salary is:$%0.2f\n\n", C);
	}
	system("pause");
	return 0;
}