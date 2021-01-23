#include <stdio.h>

int main(void)
{
	int cnt = 0;	//ºÀÁö ¼ö
	int N; //Nkg

	scanf_s("%d", &N);

	cnt = N / 5;

	if (N % 5 != 0)
	{
		for (; cnt >= 0; cnt--)
		{
			if ((N - 5 * cnt) % 3 == 0)
			{
				cnt += (N - 5 * cnt) / 3;
				break;
			}
		}
	}
	printf("%d", cnt);

	return 0;
}