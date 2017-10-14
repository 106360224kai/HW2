#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a, b,i,j;
	char sign = '+';
	char sign1 = ' ';

	printf("請輸入長:");
	scanf_s("%d", &a);
	printf("請輸入寬:");
	scanf_s("%d", &b);

	for (i = 0; i < a; i++)
	{
		for (j = 0; j < b;j++)
		{
			if (i == 0 || i == a-1|| j == 0 || j == b-1)
			{
				printf("%c", sign);
			}
			else
			{
				printf("%c", sign1);
			}
		}
		printf("\n");
	}system("pause");
}