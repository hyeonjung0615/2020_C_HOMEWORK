#include <stdio.h>

int main(void)
{
	int i = 1, j = 1, c = 1, n = 6;

	while (i < n)
	{
		while (j < c)
		{
			printf(" ");
			j++;
		}
		if (i % 2 == 1)
		{
			printf("x");
		}
		else
		{
			printf("o");
		}

		while (j < n)
		{
			printf(" ");
			j++;
		}
		printf("\n");
		i++, c++, j = 1;
	}
	return 0;
}