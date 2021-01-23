#include <stdio.h>
//등차수열 6n-1
int main(void)
{
	int input;
	int i = 1, j = 1;
	//int i = 2, j = 5, count = 2;
	scanf_s("%d", &input);

	if (input == 1)
		printf("1");
	while (1)
	{
		if (input - i <= 0) break;
		input = input - i;
		i = j * 6;
		j++;
	}

	printf("%d", j);
	
	return 0;
}