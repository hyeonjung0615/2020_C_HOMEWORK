#include <stdio.h>

int power(int, int);

int main(void)
{
	int base = 5, exp = 3; 
	printf("The %dth power of %d is %d.\n", exp, base, power(base, exp));

	return 0;
}

int power(int base, int exp)
{
	int i, result = 1;

	if (exp == 0)
		return 1;
	else
	{
		for (i = 1; i <= exp; i++)
			result *= base;
		return result;
	}
}