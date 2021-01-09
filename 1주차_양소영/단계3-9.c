#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int N;
	scanf(" %d", &N);
	for (int i = 0; i < N; i++) { //몇 번째 줄?
		for (int j = 0; j <= i; j++) { //몇 개 출력?
			printf("*");
		}
		printf("\n");
	}
}