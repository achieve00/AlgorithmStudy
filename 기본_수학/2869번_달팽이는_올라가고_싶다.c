#include <stdio.h>
int main(void)
{
	int a, b, v, i = 1, day = 0;
	scanf_s("%d %d %d", &a, &b, &v);
	while (1)
	{
		day += a;
		if (v <= day)
		{
			printf("%d", i);
			break;
		}
		day -= b;
		i++;
	}
	return 0;
}