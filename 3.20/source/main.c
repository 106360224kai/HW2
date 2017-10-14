#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int a;
	float b, c, d;
	printf("Enter5 # of hours worked (-1 to end):");
	scanf_s("%d", &a);
	while (a != -1) 
	{
		
		printf("Enter hourly rate of the worker ($00.00):");
		scanf_s("%f", &b);
		c = a*b;
		d = 40 * b + (a - 40)*b*1.5;
		if (a <= 40)
			printf("Salary is $%.2f\n\n", c);
		else
			printf("Salary is $%.2f\n\n", d);
			printf("Enter5 # of hours worked (-1 to end):");
			scanf_s("%d", &a);
	}
		system("pause");
}