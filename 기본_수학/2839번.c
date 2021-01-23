#include<stdio.h>
int main(void)
{
	int n, count = 0;
	scanf_s("%d", &n);

	while (n > 0)
	{
		if (n % 5 == 0)
		{
			count++;
			n -= 5;
		}
		else if (n % 3 == 0)
		{
			count++;
			n -= 3;
		}
		else
		{
			printf("-1");
			break;
		}
	}
	printf("%d", count);
	return 0;
}