#include <stdio.h>

int main(void)
{
	int n, x, i, j, k;
	int A[100] = {0};
	int y = 0, m = 0;
	scanf_s("%d %d", &n, &x);
	for (i = 0; i < n; i++)
	{
		scanf_s("%d", &k);
		if (k < x)
		{
			A[y] = k;
			y++;
		}
	}
	for (m; m < y; m++)
		printf("%d ", A[m]);
	return 0;
}