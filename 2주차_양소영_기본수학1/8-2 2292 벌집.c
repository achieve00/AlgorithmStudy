#include <stdio.h>

void main() {
	int honey_num = 0; //벌집 테두리 넘버 = 최소 경로
	int num = 1; //벌집 주소값의 범위, 1부터 시작
	int a = -1; //입력받을 값

	scanf_s(" %d", &a);

	while (1) {
		honey_num += 1;
		if (a <= num) { //만약 입력값이 벌집 주소값 범위(=제일 큰 수)를 벗어나면 탈출
			break;
		}
		num = num + 6 * honey_num; //주소값 범위 중 제일 큰수 계산함
	}
	printf("%d", honey_num);
}
