#include <stdio.h>

int main(void)
{
	int A, B, V;
	int h = 0;
	int cnt = 1;
	scanf_s("%d %d %d", &A, &B, &V);

	while (1)
	{
		
		h = h + A;
		if (h >= V) break;
		cnt++;
		h = h - B;
	}
	printf("%d", cnt);
	return 0;
}