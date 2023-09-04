

#include<stdio.h>

int main(void) {

	int a, b;
	int max;

	printf("두 개의 값을 입력하시오: ");
	scanf_s("%d %d", &a, &b);

	if (a >= b)
		max = a;
	else
		max = b;

	printf("최대값 = %d \n", max);

	return 0;
}