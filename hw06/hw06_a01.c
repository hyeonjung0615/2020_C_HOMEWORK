#include <stdio.h>
#define N 2
int main(void)
{
	char cArr[2] = { 'a', 'b' };
	int iArr[2] = { 0,1 };
	double dArr[2] = { 0.1, 0.2 };
	int i, j, z;

	printf("The size of cArr, iArr, dArr is %d %d %d.\n", sizeof(cArr), sizeof(iArr), sizeof(dArr));
	printf("The address of cArr is %p.\n", cArr);
	
	for (i = 0; i < N; i++)
		printf("The address of cArr[%d] is %p.\n", i, &cArr[i]);

	printf("The address of iArr is %p.\n", iArr);

	for (j = 0; j < N; j++)
		printf("The address of iArr[%d] is %p.\n", j, &iArr[j]);

	printf("The address of dArr is %p.\n", dArr);

	for (z = 0; z < N; z++)
		printf("The address of dArr[%d] is %p.\n", z, &dArr[z]);

	return 0;
}