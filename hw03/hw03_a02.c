#include <stdio.h>

void printm(int, int);

int main(void)
{
	int row = 5, column = 5;

	printm(row, column);

	return 0;
}

void printm(int r, int c)
{
	int i;
	for (i = 1; i <= r; i++)
	{
		if (i % 2 == 0)
		{
			printf("OXOXO");
				printf("\n");
		}

		else
		{
			printf("XOXOX");
			printf("\n");
		}
			
	}
	return 0;
}

