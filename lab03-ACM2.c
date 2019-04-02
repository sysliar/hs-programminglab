// Lab3-ACM
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
// 단위 분수의 합으로 a/b 를 구하고 가장 마지막 단위분수 1/x 를 구하고
// x 를 return 한다.
// 1/x1 <= a/b 인 최대값 x1을 구하고 a/b 에서 1/x1을 뺀 값에 대하여 반복한다.
#define MAX(x, y) ((x>y) ? (x) : (y))
#define MIN(x, y) ((x<y) ? (x) : (y))

int gcd(int a, int b) // 최대공약수
{
	int g = 1;
	for (int i = 2; i <= MIN(a, b); i++) {
		if (a % i == 0 && b % i == 0)
			g = i;
	}
	return g;
}

int lcm(int first, int second) // 최소공배수
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