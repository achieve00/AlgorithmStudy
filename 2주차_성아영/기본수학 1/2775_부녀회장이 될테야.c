#include <stdio.h>

int main(void)
{
	int T; //Test Case
	int i, j;
	int k;	//k��
	int n; //nȣ
	int apt[15][15] = { NULL };

	for (i = 0; i < 15; i++) 
		apt[0][i] = i;
	for (i=1;i<15;i++)
		for (j = 1; j < 15; j++)
			apt[i][j] = apt[i - 1][j] + apt[i][j - 1];	
			//apt[i-1][j]�� ������ �ٷ� ���� ���������� �հ� ���� ���� 
		
	scanf_s("%d", &T);

	for (int i = 0; i < T; i++)
	{
		scanf_s("%d", &k);
		getchar();
		scanf_s("%d", &n);
		getchar();
		printf("%d\n", apt[k][n]);
	}
	return 0;
}