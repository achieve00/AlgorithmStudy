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
		//이게 왜 되지?? 위가 원래 내 답 후자는 인터넷 검색
		printf("%d\n", a + b);
	return 0;
}
/*
while ((scanf("%d %d", &a, &b) == 2) && (a || b))
또한 && 쉼표보다 눈에 띄기 때문에 더 직관적 입니다.

참고 : 
scanf("%d %d", &a, &b) == 2 컴퓨터 2진수 연산으로 대충 저 결과가 a랑 b에 0dmf 넣었을때 나오는 값이라고 함
a || b 및과 같은 의미 a != 0 || b != 0, 즉 a 또는 중 하나 이상이 b 0 이 아님을 의미합니다.

출처1: https://blog.csdn.net/liluo_2951121599/article/details/78595086
출처2: https://coderoad.ru/38027068/%D0%BA%D0%B0%D0%BA-%D1%8D%D1%82%D0%BE-works-while-scanf-d-d-a-b-a-b
*/