#include <stdio.h>

int oddsum1(int num);
int oddsum2(int num);
int oddsum3(int num);
int result = 0;

int main() {
	int n = 100;
	int SUM = 0;

	printf("(1) for oddsum1 (%d) = %d\n", n, oddsum1(n));
	printf("(2) while oddsum2 (%d) = %d\n", n, oddsum2(n));
	printf("(3) Àç±Í oddsum3 (%d) = %d\n", n, oddsum3(n));

	for (int i = 0; i < n; i++) {
		if (i % 2 == 1)
			SUM = SUM + oddsum1(i);
	}
	printf("(4) SUM = %d\n", SUM);
	return 0;
}

int oddsum1(int num) {
	int result = 0;
	for (int i = 1; i <= num; i++) {
		if (i % 2 == 1)
			result = result + i;
	}
	return result;
}

int oddsum2(int num) {
	int result = 0, i = 0;
	while (i <= num) {
		if (i % 2 == 1)
			result = result + i;
		i++;
	}
	return result;
}

int oddsum3(int num) {
	if (num % 2 == 0) num = num - 1;
	if (num <= 1)
		return num;
	else
		return (num + oddsum3(num - 2));
}