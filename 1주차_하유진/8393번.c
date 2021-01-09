//гу
#include <stdio.h>
int main(void)
{
	int a = 0, n, i;
	scanf_s("%d", &n);
	for (i = 1; i <= n; i++)
	{
		a += i;
	}
	printf("%d", a);
	return 0;
}