//A / B
#include<stdio.h>
int main(void)
{
	double a, b;
	scanf_s("%lf %lf", &a, &b);
	printf("%.9lf\n", a / b);
	return 0;
}