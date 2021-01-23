#include<stdio.h>
int main(void)
{
	int A, B, C; //A:고정비용, B:가변비용, C:물건가격
	
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