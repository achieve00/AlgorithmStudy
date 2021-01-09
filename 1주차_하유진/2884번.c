//알람시계
#include <stdio.h>
int main(void)
{
	int h, m;
	scanf_s("%d %d", &h, &m);

	if (m >= 45)
	{
		printf("%d %d", h, m - 45);
	}
	else
	{
		if (h == 0)
		{
			h = 23;
			printf("%d %d", h, m + 60 - 45);
		}
		else
		{
			h = h - 1;
			printf("%d %d", h, m + 60 - 45);
		}
	}
	return 0;
}