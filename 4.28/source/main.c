#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	float f,e;
	int a,b,c,d,g,h;
	printf("1.�g�z�H��  2.���~�u  3.�����   4�s�u\n\n");
	printf("�п�J�~��N�X:");
	scanf_s("%d", &a);

	switch (a)
	{
	
	case 1:
		printf("�~��:30000\n");
		break;
	case 2:
		printf("���~��100��\n");
		printf("�п�J�u�@�ɼ�:");
		scanf_s("%d", &b);
		c = b * 100;
		d = 4000 + (b - 40) * 150;
		if (b <= 40)
			printf("�~��:%d\n", c);
		else if (b>40)
			printf("�~��:%d\n", d);
		break;
	case 3:
		printf("�P����B:");
		scanf_s("%f", &e);
		f = 250 + e*0.057;
		printf("�~��:%f\n", f);
		break;
	case 4:
		printf("�@��10��\n");
		printf("�Ͳ����:");
		scanf_s("%d", &g);
		h = g * 10;
		printf("��o�~��:%d\n", h);
		break;
	}system("pause");
}