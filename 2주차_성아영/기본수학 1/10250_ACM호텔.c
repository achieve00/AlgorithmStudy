#include <stdio.h>

int main(void)
{
	int T; //테스트 데이터 개수
	int H[100] = { NULL }, W[100] = { NULL }, N[10000] = { NULL };	
	//호텔의 층수, 각 층의 방수, 몇번째 손님
	int RH;		//방의 층수
	int RW;		//호실
	int R;

	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d %d %d", &H[i], &W[i], &N[i]);
		getchar();
	}

	for (int i = 0; i < T; i++)
	{
		RH = N[i] % H[i];
		RW = N[i] / H[i] + 1;
		R = RH * 100 + RW;
		printf("%d\n", R);
	}

	return 0;
}