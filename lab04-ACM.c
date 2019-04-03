//  1학기 프로그래밍랩 
// 4주
// Lab4-ACM : 양의 정수를 최소 개수의 피보나치 수열의 합으로 구하기
// 100 = 3 + 8 + 89

#include <stdio.h>
// f<=n 인 fibonacci 최대값 f 를 구해서 return 한다
// recursive 로 작성하면 너무 시간이 오래 걸리기 때문에
// iterative 방식으로 구현하여야 함
int find_max_fibo(int n) {
	int i;
	int rear = 0;
	int mid = 1;
	int head = 0;
	while(head <= n) {
        rear = mid;
		mid = head;
        head = rear + mid;
	}
    return mid;
}
// n 이 주어지면
// n==1 이면 1을 출력하고 return
// f <= n 인 피보나치 최대값 f를 찾고
// f==n 이면 f를 출력 하고 return
// (n-f)>0 이면 n=(n-f) 에 대해 다시 피보나치 조합을 재귀함수로 찾는다

void find_fibos(int n) {
	int f = find_max_fibo(n);
	if (n == 1) {
		printf("1");
		return;
	}
	if(f == n) {
		printf("%d", f);
		return;
	}
	if((n-f) > 0 ) {
		find_fibos(n-f);
		printf(" %d ", f);
	}
}

void main()
{
	int n_tests;
	int n;
	scanf("%d", &n_tests);
	while (n_tests--) {
		scanf("%d", &n);
		find_fibos(n);
		printf("\n");
	}

}

