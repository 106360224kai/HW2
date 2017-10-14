#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f,e;
	int a,b,c,d,g,h;
	printf("1.經理人員  2.時薪工  3.抽佣金   4零工\n\n");
	printf("請輸入薪資代碼:");
	scanf_s("%d", &a);

	switch (a)
	{
	
	case 1:
		printf("薪資:30000\n");
		break;
	case 2:
		printf("時薪為100元\n");
		printf("請輸入工作時數:");
		scanf_s("%d", &b);
		c = b * 100;
		d = 4000 + (b - 40) * 150;
		if (b <= 40)
			printf("薪資:%d\n", c);
		else if (b>40)
			printf("薪資:%d\n", d);
		break;
	case 3:
		printf("銷售金額:");
		scanf_s("%f", &e);
		f = 250 + e*0.057;
		printf("薪資:%f\n", f);
		break;
	case 4:
		printf("一件10元\n");
		printf("生產件數:");
		scanf_s("%d", &g);
		h = g * 10;
		printf("獲得薪資:%d\n", h);
		break;
	}system("pause");
}