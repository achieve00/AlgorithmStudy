#include <stdio.h>

int main(void)
{
	int i = 1, j = 1;	// i는 분자, j는 분모
	int input;
	int n;
	scanf_s("%d", &input);

	for (n = 1; input - n > 0; n++)
		input = input - n;
		//n은 분모의 MAX-1, input은 수열에서 몇 번째 위치인지

	i = n + 1 - input;
	j = input;

	printf("%d / %d", i, j);
	return 0;
}