#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	
	int i,j;
	
	
	printf("(A)\n");
	for ( i = 1; i <=10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i>j&&j<10)
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
	printf("(B)\n");
	for (i = 11; i > 0; i--)
	{
		for (j =1 ; j <11; j++)
		{
			if (i >j &&j <11)
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
	printf("(C)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (i < j&&j < 11)
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
	printf("(D)\n");
	for (i = 10; i >0; i--)
	{
		for (j = 0; j < 12; j++)
		{
			if (j > i&&j < 12)
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
