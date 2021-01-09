#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int a, b;
	scanf(" %d \n %d", &a, &b);
	printf("%d \n", a * (b % 10));
	printf("%d \n", a * ((b / 10) % 10));
	printf("%d \n", a * (b / 100));
	printf("%d \n", a * b);
}
