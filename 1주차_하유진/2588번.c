#include <stdio.h>
int main(void)
{
	int a, b, c; // ���ڸ��� 
	int d, e, f; // ���ڸ���
	int h, i, j; // (3),(4),(5)��ġ�� �� ��
	
	scanf_s("%d %d %d", &a, &b, &c);
	scanf_s("%d %d %d", &d, &e, &f);

	h = (c * f) + (10 * b * f) + (100 * a * f);
	i = ((c * e) + (10 * b * e) + (100 * a * e));
	j = ((c * d) + (10 * b * d) + (100 * a * d));

	printf("%d\n", h);
	printf("%d\n", i);
	printf("%d\n", j);
	printf("%d\n", h + (10 * i) + (100 * j));
	return 0;
}