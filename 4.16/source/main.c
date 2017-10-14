#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char s[2] = "*";
	char t[2] = " ";
	int i, j, a, b,k;
	printf("(A)\n");
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < i + 1; j++)
		{
			printf("%s", s);
		}
		printf("\n");
	}
	//===========================================================

	printf("(B)\n");

	for (i = 10; i > 0; i--)
	{
		for (j = 0; j < i; j++)
		{
			printf("%s", s);
		}
		printf("\n");
	}
	//================================================
	printf("(c)\n");

	for (i = 10; i > 0; i--)
	{
		for (k = 10; k > i; k--)
		{
			printf("%s", t);
		}
		
			for (j = 0; j < i; j++)
			{
				printf("%s", s);
			}
		
		printf("\n");
	}
	printf("(D)\n");

	for (i = 0; i < 11; i++)
	{
		for (k = 10; k > i; k--)
		{
			printf("%s", t);
		}

		for (j = 0; j < i; j++)
		{
			printf("%s", s);
		}printf("\n");
	}system("pause");
		
}