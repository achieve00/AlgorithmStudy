#include<stdio.h>
int main(void)
{
	int n, i = 1, add = 0, m;
	scanf_s("%d", &n);
	while (1)
	{
		add += i;
		if (n <= add)
		{
			if (i % 2 == 0)
			{
				m = add % n;
				printf("%d/%d", i - m, m + 1);
				break;
			}
			else
			{
				m = add % n;
				printf("%d/%d", m + 1, i - m);
				break;
			}
		}
		i++;
	}
	return 0;
}