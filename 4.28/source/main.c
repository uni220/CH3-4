#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,r;
	double  b,c, i, j,g;
	while (1)
	{
		printf("�п�J1~4:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			    printf("�o�g���~��:");
				printf("2000\n");
				break;
		case 2:
			printf("�п�J�u�@�X�p��:");
			scanf_s("%lf", &i);
			if (i >= 40)
			{
				
				b = 40 * 140 + (i - 40)*1.5 * 140;
				printf("�o�g���~��:");
				printf("%0.2lf\n",b);
			}
			else
			{
				b = i * 140;
				printf("�o�g���~��:");
				printf("%0.2lf\n",b);
			}
			break;
		case 3:
			printf("�п�J�o�g�P����B:");
			scanf_s("%lf", &j);
			c = 250 + j * 0.0507;
			printf("�o�g���~��:");
			printf("%0.2lf\n", c);
			break;
		case 4:
			printf("�п�J�o�g�Ͳ������:");
			scanf_s("%lf", &g);
			printf("�o�g���~��:");
			printf("%0.2lf\n",g);
			break;
		}
	}
	system("pause");
	return 0;

}