#include <stdio.h>
#include <stdlib.h>

int main(void)
{	float a, b, c;
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a);
	while (a != -1)
{
	b = a*0.09;
	c = b + 200;

	printf("Salary is:%f\n\n", c); 
	printf("Enter sales in dollars (-1 to end):");
	scanf_s("%f", &a); 
	
}     system("pause");
	
}