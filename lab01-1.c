#include <stdio.h>

int main() {
	int sum = 100, num;
	while (sum != 0) {
		printf("sum = %d »¬ °ª ÀÔ·Â : ", sum);
		scanf("%d", &num);
		sum -= num;
	}
	printf("sum = 0\n");
	return 0;
}