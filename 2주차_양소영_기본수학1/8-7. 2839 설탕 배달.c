#include <stdio.h>

void main() {
	int num;
	int count = 0;
	scanf_s("%d", &num);

	while (num > 0) {
		if (num % 5 == 0) {
			num = num - 5;
			count++;
		}
		else if (num % 3 == 0) {
			num = num - 3;
			count++;
		}
		else if (num > 5) { //5으로도 3으로도 안 나눠질 때
			num = num - 5;
			count++;
		}
		else {
			count = -1;
			break;
		}
	}
	printf("%d", count);
}
