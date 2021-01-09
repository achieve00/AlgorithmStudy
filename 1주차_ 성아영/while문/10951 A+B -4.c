#include <stdio.h>

int main(void)
{
	int a, b;
	a = NULL;
	b = NULL;
	while (scanf_s("%d %d", &a, &b)!=EOF)
		printf("%d\n", a + b);
	return 0;
}