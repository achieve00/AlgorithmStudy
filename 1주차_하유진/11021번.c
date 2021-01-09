//A+B-7
#include<stdio.h>
int main(void) 
{
	int t, a, b, i;
	scanf_s("%d", &t);
	for (i = 1; i <= t; i++)
	{
		scanf_s("%d %d", &a, &b);
		printf("Case #%d: %d\n", i, a + b);
	}
	return 0;
}
