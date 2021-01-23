#include <stdio.h>

int main(void)
{
	int a;	//고정비용
	int b;	//가변비용
	int c;	//판매가격

	scanf_s("%d %d %d", &a, &b, &c);

	if (c <= b)
		printf("-1\n");
	else
		printf("%d\n", a / (c - b) + 1);

	return 0;
}