#include <stdio.h>

int main(void)
{
	int T; //�׽�Ʈ ������ ����
	int H[100] = { NULL }, W[100] = { NULL }, N[10000] = { NULL };	
	//ȣ���� ����, �� ���� ���, ���° �մ�
	int RH;		//���� ����
	int RW;		//ȣ��
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