#include <stdio.h>
#pragma warning(disable:4996)


void main() {
	int H, M;
	int a;
	scanf(" %d %d", &H, &M);
	if ((M - 45) < 0) {
		if (H == 0) {
			H = 23;
		}
		else {
			H = H - 1;
		}
		a = 45 - M;
		M = 60 - a;
	}
	else {
		M = M - 45;
	}
	printf("%d %d", H, M);
} 
