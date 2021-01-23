#include<stdio.h>
int main(void)
{
	int h, w, n, num;

	scanf_s("%d", &num);
	for (int i = 0; i < num; i++)
	{
		scanf_s("%d %d %d", &h, &w, &n);
		if ((n / h + 1) > 10)
		{
			printf("%d%d\n", n % h, (n / h) + 1);
		}
		else
		{
			printf("%d0%d\n", n % h, (n / h) + 1);
		}
	}
	return 0;
}