//A+B-3
#include <stdio.h>
int main(void)
{
	int i, t, a, b;
	scanf_s("%d", &t);
	/*int a[t];
	int b[t];
	for (i = 0; i < t; i++)
	{
		scanf_s("%d %d", &a[i], &b[i]);
	}
	for (i = 0; i < t; i++)
	{
		printf("%d", a[i] + b[i]);
	}*/
	for (i = 0; i < t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("%d", a + b);
	}
	return 0;
}