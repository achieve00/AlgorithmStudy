#include <stdio.h>

int main(void)
{
	int i = 1, j = 1;	// i�� ����, j�� �и�
	int input;
	int n;
	scanf_s("%d", &input);

	for (n = 1; input - n > 0; n++)
		input = input - n;
		//n�� �и��� MAX-1, input�� �������� �� ��° ��ġ����

	i = n + 1 - input;
	j = input;

	printf("%d / %d", i, j);
	return 0;
}