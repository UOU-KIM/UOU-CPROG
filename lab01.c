

#include<stdio.h>

int main(void) {

	int a, b;
	int max;

	printf("�� ���� ���� �Է��Ͻÿ�: ");
	scanf_s("%d %d", &a, &b);

	if (a >= b)
		max = a;
	else
		max = b;

	printf("�ִ밪 = %d \n", max);

	return 0;
}