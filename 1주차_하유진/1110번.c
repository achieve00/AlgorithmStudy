#include <stdio.h>
int main(void) {
	int x ,n = 0, i = 0;
	scanf_s("%d", &x);
	while (1)
	{
		if (x < 10)
		{
			n = (10 * x) + x;
		}
		else
		{
			int n1;
			n1 = (x / 10) + (x % 10);
			n = ((x % 10) * 10) + (n1 % 10);
		}
		i++;
		if (x == n)
		{
			break;
		}
	}
	printf("%d\n", i);
	return 0;
}