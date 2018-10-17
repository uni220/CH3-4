#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void)
{
	double a;
	double principal=5000;
	double rate=.05;
	unsigned int year;
	for (rate = 0.1; rate <= 0.125; rate += 0.005)
	{
		printf("(%.1lf)\n", rate * 100);
		for (year = 1; year <= 15; year++)
		{
			a = principal * pow(1.0 + rate, year);
			printf("%4u%21.2f\n", year, a);
		}
		printf("\n");
		}
	system("pause");
	return 0;
}