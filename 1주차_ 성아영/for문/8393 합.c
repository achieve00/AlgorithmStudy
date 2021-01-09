#include <stdio.h>

int main(void)
{
	int n, i, sum;
	sum = 0;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
		sum = sum + i;
	printf("%d", sum);
	return 0;
}