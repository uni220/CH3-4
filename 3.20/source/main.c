#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int worked;
	double worker,Salary;

	while (1)
	{
		printf("Enter # of hours worked (-1 to end):");
		scanf_s("%d", &worked);
		if (worked == -1) break;
		printf("Enter hourly rate of the worker($00.00):");
		scanf_s("%lf", &worker);

		if (worked >= 40)
		{
			Salary = 40 * worker + (worked - 40) * 1.5*worker;
			printf("Salary is $ %0.2lf \n\n", Salary);
		}
		else
		{
			Salary = worked * worker ;
			printf("Salary is $ %0.2lf \n\n", Salary);
		}
		}
	system("pause");
	return 0;
}