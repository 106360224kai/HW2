#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	printf("Enter account number (-1 to end):");
	scanf_s("%d", &a);
	while (a != -1)
	{

		float b, c, d, e, g;

		printf("Enter beginning balance:");
		scanf_s("%f", &b);
		printf("Enter total charges:");
		scanf_s("%f", &c);
		printf("Enter total credits:");
		scanf_s("%f", &d);
		printf("Enter credit limit:");
		scanf_s("%f", &e);
		g = b + c - d;
		printf("Account:%d\n", a);
		printf("Credit limit:%f\n", e);
		printf("Balance:%f\n", g);
		if (g > e)

			printf("Credit Limit Exceeded.\n\n");

		
		printf("Enter account number (-1 to end):");
		scanf_s("%d", &a);
	}system("pause");
}