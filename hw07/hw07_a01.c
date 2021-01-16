#include <stdio.h>

int main(void)
{
	char arr[] = "Hello, World!";
	char str[100];
	int len, i=0;
	char* p;

	len = sizeof(arr);
	p = arr + len - 2;
	
	while (arr[i] != '\0')
	{
		str[i++] = *p--;
	}
	str[i] = '\0';
	
	printf("%s\n", arr);
	printf("%s", str);

	return 0;
}