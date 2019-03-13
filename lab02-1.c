#include <stdio.h>

int isPrime(int n) {
	for (int i = 2; i < n; i++) {
		if (n%i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int i, sum = 0;
	for (int i = 2; i <= 100; i++) {
		if (isPrime(i) == 1) {
			sum += i;
			printf("%d ", i);
		}
	}
	printf("\n");
	printf("sum=%d\n", sum);
}