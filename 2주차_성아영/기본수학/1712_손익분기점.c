#include <stdio.h>

int main(void)
{
	int a;	//�������
	int b;	//�������
	int c;	//�ǸŰ���

	scanf_s("%d %d %d", &a, &b, &c);

	if (c <= b)
		printf("-1\n");
	else
		printf("%d\n", a / (c - b) + 1);

	return 0;
}