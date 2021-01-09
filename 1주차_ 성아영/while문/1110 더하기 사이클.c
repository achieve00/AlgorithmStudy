#include <stdio.h>

int main(void)
{
	int n; //입력 받는 수
	int op, tp; // 1의 자리, 10의 자리
	int i = 0; //사이클 변수
	int m = 100;	//새로운 수의 값
	int j;

	scanf_s("%d", &n); //n을 입력 받는다

	op = n % 10;	//n의 1의 자리
	tp = n / 10;	//n의 10의 자리

	while (m != n)	//m이 n의 값과 다를때 반복
	{
		i++;	//사이클 +1
		j = op + tp;	//먼저 10의 자리와 1의 자리를 더한다
		m = j % 10 + (op * 10);	//m에 1의 자리*10+j값의 1의 자리를 더한 값을 집어 넣는다
		op = m % 10;
		tp = m / 10;
		//다시 m을 10의 자리와 1의 자리로 구한다
	}
	printf("%d", i);
	return 0;
}