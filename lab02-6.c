#include <stdio.h>
#include <stdlib.h>

int sum(int *arr, int n) {
	int sum = 0;
	for (int i = 0; i < n; i++) {
		sum += arr[i];
	}
	return sum;
}

int max_num(int *arr, int n) {
	int num = arr[0];
	for (int i = 0; i < n; i++) {
		if (num < arr[i])
			num = arr[i];
	}
	return num;
}

int min_num(int *arr, int n) {
	int num = arr[0];
	for (int i = 0; i < n; i++) {
		if (num > arr[i])
			num = arr[i];
	}
	return num;
}

int main() {
	int T;
	int k;
	int *test_set;

	scanf("%d", &T);
	for (int i = 0; i < T; i++) {
		scanf("%d", &k);
		test_set = (int *)malloc(sizeof(int)*k);
		for (int i = 0; i < k; i++) {
			scanf("%d", &test_set[i]);
		}
		printf("%d %d %d\n", sum(test_set, k), max_num(test_set, k), min_num(test_set, k));
	}

	free(test_set);
	return 0;
}