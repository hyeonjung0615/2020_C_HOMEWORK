#include <stdio.h>

int main(void)
{
	int x1 = 0xAAAA, x2 = 0x5555, x3 = 0x3fff;
	int y = 2017, m = 9, d = 1;
	char s1[] = "Hello", s2[] = ",", s3[] = "World!";
	double f1 = 3.141592;

	printf("0x%X | 0x%X = 0x%x \n", x1, x2, x1+x2);
	printf("(0x%X ^ 0x%X) >> 2 = 0x%x\n", x1, x2, x3);
	printf("%d\t0%d\t0%d\n", y, m, d);
	printf("%.4lf, %.4e\n", f1, f1);
	printf("%.8lf, %.8e\n", f1, f1);
	printf("%s%s %s\n", s1, s2, s3);
	printf("%.4s%s %s\n", s1, s2, s3);
	printf("\"%.2s\", \'%.2s\'\n", s1, s3);
	printf("\x54\x68\x65\x20\x49\x6E\x54\x65\x72\x6E\x65\x74\x20\x6F\x66\x20\x54\x68\x69\x6E\x67\x73\n");
	printf("\104\145\160\164\040\157\146\040\111\157\124\054\040\123\103\110\n");

	return 0;
}