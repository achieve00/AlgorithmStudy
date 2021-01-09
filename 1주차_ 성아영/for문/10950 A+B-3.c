#include <stdio.h>

int main(void)
{
	int i, A, B;
	scanf_s("%d", &i);

	for (int k=0; k < i; k++)
	{
		scanf_s("%d %d", &A, &B);
		printf("%d\n", A + B);
	}
	return 0;
}