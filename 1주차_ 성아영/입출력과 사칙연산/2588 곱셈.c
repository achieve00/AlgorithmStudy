#include <stdio.h>

int main(void)
{
	int a, b, c, d, e, sum;
	scanf_s("%d", &a);
	scanf_s("%d", &b);

	c = a * (b % 10);
	d = a * (b % 100- (b % 10));
	e = a * (b % 1000- (b % 100));
	sum = c + d + e;

	printf("%d\n", c);
	printf("%d\n", d/10);
	printf("%d\n", e/100);
	printf("%d\n", sum);
	return 0;
}