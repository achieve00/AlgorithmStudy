#include <stdio.h>

void main() {
	int W, H, N, room, floor, num = 1; //room은 호실, floor는 층
	scanf_s(" %d", &num);
	for (int i = 0; i < num; i++) {
		scanf_s("%d %d %d", &H, &W, &N);
		floor = N % H; //층수는 N % H
		room = (N / H) + 1; //호실은 ( N / H )+1
		printf("%d%02d\n", floor, room);
	}
}
