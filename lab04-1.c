// 1학기 프로그래밍랩 - 4주
// Lab4-1 재귀함수

#include <stdio.h>
int sum(int n)
{
	if (n <= 1)
		return n;
	else
		return n + sum(n - 1);
}
int oddsum(int n) // 홀수의 합
{
	if (n <= 1)
		return n;
	if (n % 2 == 0) {
		n--;
		oddsum(n);
	}
	else
		return n + oddsum(n - 2);
}
int evensum(int n) // 짝수의 합
{
	if (n <= 2)
		return n;
	if (n % 2 == 1) {
		n--;
		evensum(n);
	}
	else
		return n + evensum(n - 2);
}
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else
		return n * factorial(n - 1);
}

int fibo(int n)
{
	if (n <= 1)
		return n;
	return fibo(n - 1) + fibo(n - 2);
}

void binary(int n)
{
	if (n < 2)
		printf("%d", n);
	else {
		binary(n / 2);
		printf("%d", n % 2);
	}
}
void jinbub(int n, int k) // 10진수 n을 k진법으로 출력
{
	if (n < k)
		if (n%k >= 10)
			printf("%c ", n % k + 55);
		else
			printf("%c ", n % k + 48);
	else {
		jinbub(n/k, k);
		if (n%k >= 10)
			printf("%c ", n % k + 55);
		else
			printf("%c ", n % k + 48);
	}

}
void main()
{
	int i, k, n = 10;
	printf("sum(%d) = %d\n", n, sum(n));
	printf("oddsum(%d) = %d\n", n, oddsum(n));
	printf("evensum(%d) = %d\n", n, evensum(n));
	printf("factorial(%d) = %d\n", n, factorial(n));
	printf("fibonacci = ");
	for (i=0;i<=30;i++)
		printf("%d:%d ", i,fibo(i));
	printf("\n");
	n = 12345;
	printf("binary(%d) = ", n);
	binary(n);
	printf("\n");

	n = 0x12abcdef; // 313249263
	printf("n=%d\n", n);
	for (k = 2; k <= 10; k++) {
		printf("%d진법 : ", k);
		jinbub(n, k);
		printf("\n");
	}
	k = 16;
	printf("%d진법 : ", k);
	jinbub(n, k);
	printf("\n");

}