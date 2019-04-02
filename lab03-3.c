// Lab3-3 실행 시간 측정
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h> 
void main(void)
{
	clock_t start, finish;
	double duration;
	int i, j, k=0;
	start = clock();
	// 수행시간을 측정하고자 하는 코드.... 
	for (i = 1; i <= 100000; i++)
		for (j = 1; j<10000; j++)
			k++;
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("%f 초입니다.\n", duration);

}
