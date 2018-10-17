#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int a,r;
	double  b,c, i, j,g;
	while (1)
	{
		printf("請輸入1~4:");
		scanf_s("%d", &a);
		switch (a)
		{
		case 1:
			    printf("這週的薪資:");
				printf("2000\n");
				break;
		case 2:
			printf("請輸入工作幾小時:");
			scanf_s("%lf", &i);
			if (i >= 40)
			{
				
				b = 40 * 140 + (i - 40)*1.5 * 140;
				printf("這週的薪資:");
				printf("%0.2lf\n",b);
			}
			else
			{
				b = i * 140;
				printf("這週的薪資:");
				printf("%0.2lf\n",b);
			}
			break;
		case 3:
			printf("請輸入這週銷售金額:");
			scanf_s("%lf", &j);
			c = 250 + j * 0.0507;
			printf("這週的薪資:");
			printf("%0.2lf\n", c);
			break;
		case 4:
			printf("請輸入這週生產的件數:");
			scanf_s("%lf", &g);
			printf("這週的薪資:");
			printf("%0.2lf\n",g);
			break;
		}
	}
	system("pause");
	return 0;

}