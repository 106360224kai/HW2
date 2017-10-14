#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i,k,j;
	char s[2] = "*";
	char t[2] = " ";
	for (i = 0; i < 9; i++)
	{
		if (i < 5)
		{
			for (k = i; k < 4; k++)
			{
				printf("%s", t);
			}
			for (j = i; j < (3 * i) + 1; j++)
			{
				printf("%s", s);
			}
			printf("\n");
		}
		else {
			for (k = i; k > 4; k--)
			{
				printf("%s", t);
			}
			for (j = i; j < 17 - i; j++)
			{
				printf("%s", s);
			}
			printf("\n");
		}
	}system("pause");
}