#include <stdio.h>

int main(void)
{
	int n, A, B;
	
	scanf_s("%d", &n);
	
	for (int i = 1; i <= n; i++)
	{
		scanf_s("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, A + B);
	}
	return 0;
}