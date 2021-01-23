#include <stdio.h>
int main(void)
{
	int a[14] = { 1, } , t, k, n;
	int a_1[14] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14 };

	scanf_s("%d", &t);

	for (int i = 0; i < t; i++) //테스트케이스반복
	{
		scanf_s("%d", &k);
		scanf_s("%d", &n);

		for (int j = 0; j < k; j++) //k층만큼반복
		{
			for (int z = 1; z < 14; z++)
			{
				a[z] = a[z - 1] + a_1[z];
			}
			if (j != k - 1)
			{
				for (int i = 0; i < 14; i++)
				{
					a_1[i] = a[i];
				}
			}
		}
		printf("%d\n", a[n - 1]);
	}
	return 0;
}