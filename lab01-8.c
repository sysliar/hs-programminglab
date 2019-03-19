#include <stdio.h>
void print_array(int* numarr, int num) {
	for (int i = 0; i < num; i++)
		printf("%d ", numarr[i]);
	printf("\n");
}

double compute_avg(int* numarr, int num) {
	float sum = 0;
	for (int i = 0; i < num; i++)
		sum = sum + numarr[i];
	return sum / num;
}
int find_max(int* numarr, int num) {
	int temp = numarr[0];
	for (int i = 0; i < num; i++)
	{
		if (temp < numarr[i])
			temp = numarr[i];
	}
	return temp;
}

int find_min(int* numarr, int num) {
	int temp = numarr[0];
	for (int i = 0; i < num; i++)
	{
		if (temp > numarr[i])
			temp = numarr[i];
	}
	return temp;
}

int main() {
	int arr[10] = { 10,30,5,20,44,3,100,88,9,101 };

	print_array(arr, 10);
	printf("평균 = %lf\n", compute_avg(arr, 10));
	printf("최대 = %d\n", find_max(arr, 10));
	printf("최소 = %d\n", find_min(arr, 10));

}