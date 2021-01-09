//x보다 작은 수 
#include<stdio.h>
int main(void)
{
	int n, x, y;
	scanf_s("%d %d\n", &n, &x); //수열의 길이 n
	for (int i = 0; i < n; i++)
	{
		scanf_s("%d\n", &y);
		if (y < x)
		{
			printf("%d\n", y);
		}
	}
	return 0;
}