#include<stdio.h>
int main(void)
{
	int A, B, C; //A:�������, B:�������, C:���ǰ���
	
	scanf_s("%d %d %d", &A, &B, &C);
	
	if (C <= B)
	{
		printf("-1\n");
	}
	else
	{
		printf("%d\n", A / (C - B) + 1);
	}
	return 0;
}