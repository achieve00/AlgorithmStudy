#include <stdio.h>
#pragma warning(disable:4996)

void main() {
	int N;
	scanf(" %d", &N);
	for (int i = 0; i < N; i++) { //¸î ¹øÂ° ÁÙ?
		for (int j = 0;j <= (N-i); j++) {
			printf(" ");
		}
		for (int j = 0; j <= i; j++) { //¸î °³ Ãâ·Â?
			printf("*");
		}
		printf("\n");
	}
}
