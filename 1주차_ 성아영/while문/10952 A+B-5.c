#include <stdio.h>

int main(void)
{
	int a, b;
	/*do 
	{
		scanf_s("%d %d", &a, &b);
		if (a == 0 && b == 0) break;
		printf("%d\n", a + b);
	} while (a != 0 && b != 0);
	*/
	while ((scanf_s("%d %d", &a, &b) == 2) && (a || b)) 
		//�̰� �� ����?? ���� ���� �� �� ���ڴ� ���ͳ� �˻�
		printf("%d\n", a + b);
	return 0;
}
/*
while ((scanf("%d %d", &a, &b) == 2) && (a || b))
���� && ��ǥ���� ���� ��� ������ �� ������ �Դϴ�.

���� : 
scanf("%d %d", &a, &b) == 2 ��ǻ�� 2���� �������� ���� �� ����� a�� b�� 0dmf �־����� ������ ���̶�� ��
a || b �װ� ���� �ǹ� a != 0 || b != 0, �� a �Ǵ� �� �ϳ� �̻��� b 0 �� �ƴ��� �ǹ��մϴ�.

��ó1: https://blog.csdn.net/liluo_2951121599/article/details/78595086
��ó2: https://coderoad.ru/38027068/%D0%BA%D0%B0%D0%BA-%D1%8D%D1%82%D0%BE-works-while-scanf-d-d-a-b-a-b
*/