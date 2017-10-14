#include <stdio.h>
#include <stdlib.h>

int main(void)

{
	int a, b, c, d, e;
	for (a = 1; a < 501; a++)
	{

		for (b = 1; b < 500; b++)
		{
			for (c = 1; c < 500; c++)
			{
				d = a*a;
				e = (b*b) + (c*c);
				if (d == e)

					printf("side1:%d  side2:%d ±×Ãä:%d\n", b, c, a);
			}
		}
	}system("pause");
}