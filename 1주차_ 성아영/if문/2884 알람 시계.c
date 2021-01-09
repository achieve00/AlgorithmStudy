#include <stdio.h>

int main(void)
{
	int H, M;
	scanf_s("%d %d", &H, &M);
	if (M - 45 >= 0)
		printf("%d %d", H, M - 45);
	else
	{
		if (H - 1 < 0)
			H = 23;
		else 
			H = H - 1;
		M = 60 - (45 - M);
	}
	printf("%d %d", H, M);
	return 0;
}