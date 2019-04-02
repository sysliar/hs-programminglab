// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// ���� �м��� ������ a/b �� ���ϰ� ���� ������ �����м� 1/x �� ���ϰ�
// x �� return �Ѵ�.
// 1/x1 <= a/b �� �ִ밪 x1�� ���ϰ� a/b ���� 1/x1�� �� ���� ���Ͽ� �ݺ��Ѵ�.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int gcd(int a, int b) // �ִ�����
{
	int g = 1;
	for (int i = 2; i <= MIN(a, b); i++) {
		if (a % i == 0 && b % i == 0)
			g = i;
	}
	return g;
}

int lcm(int first, int second) // �ּҰ����
{
	return first * second / gcd(first, second);
}

void find_last_x(int a, int b) {
	int k, i = 1;
	while (a != 1) {
		k = b / a + 1;
		a = a * k - b;
		b = b * k;

		a = a / gcd(a, b);
		b = b / gcd(a, b);
		if (i == 1) {
			i++;
			printf("1/%d", k);
		}
		else
		printf(" + 1/%d", k);
	}
	printf(" + 1/%d", b);
	printf("\n");
}
void main()
{
	int n_test;
	int a, b; // a/b
	scanf("%d", &n_test);
	while (n_test--) {
		scanf("%d %d", &a, &b); // input a  b
		find_last_x(a, b);
	}
}