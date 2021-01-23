#include<stdio.h>
int main(void)
{
	int n, i = 0, score = 1;
	scanf_s("%d", &n);

	while (1)
	{
		score += 6 * i;
		if (n <= score)
		{
			printf("%d", i + 1);
			break;
		}
		i++;
	}
	return 0;
}