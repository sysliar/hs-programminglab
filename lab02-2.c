#include <stdio.h>
int num_find(int n) {
	int sum = 1;
	for (int i = 2; i < n; i++) {
		if(n%i == 0) {
			sum = sum + i;
		}
	}
	if (sum == n) return 1;
	else return 0;
}

void num_print(int n) {
	printf("%d = 1", n);
	for (int i = 2; i < n; i++) {
		if (n%i == 0) {
			printf(" + %d", i);
		}
	}
	printf("\n");
}

int main() {
	for (int num = 2; num <= 10000; num++) {
		if (num_find(num) == 1) {
			num_print(num);
		}
	}
}