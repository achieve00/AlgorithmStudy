#include <stdio.h>
/*
void main() {
	int A, B, V, days;
	scanf_s("%d %d %d", &A, &B, &V);
	days = (V - A) / (A - B); //A-B는 하루에 가는 미터
	//V-A인 이유 : V-A미터 이상 올라간 다음 날 정상에 도착하기 때문 A미터만 올라가면 V이상이니까
	//다음날 낮까지 올라가야 하므로 +1 해줌
	
	if ((V - A) % (A - B) != 0) { //만약 나머지가 0이 아니면 하루 더 올라가야 하므로 +1
		days++;
	}

	printf("%d", days+1); 
}*/