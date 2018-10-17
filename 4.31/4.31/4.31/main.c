#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int i, j;
	for (i = 4; i >= 0; i--)
	{
		for (j = 0; j < 9; j++)
		{
			if (j >= i && j < 9 - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}
			
		}
		printf("\n");
	}
	for (i = 1; i<=4; i++)
	{
		for (j = 0; j < 9; j++)
		{
			if (j >= i && j < 9 - i)
			{
				printf("*");
			}
			else
			{
				printf(" ");
			}

		}
		printf("\n");
	}
	system("pause");
	return 0;
}