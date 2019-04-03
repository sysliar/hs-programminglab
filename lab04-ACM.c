//  1�б� ���α׷��ַ� 
// 4��
// Lab4-ACM : ���� ������ �ּ� ������ �Ǻ���ġ ������ ������ ���ϱ�
// 100 = 3 + 8 + 89

#include <stdio.h>
// f<=n �� fibonacci �ִ밪 f �� ���ؼ� return �Ѵ�
// recursive �� �ۼ��ϸ� �ʹ� �ð��� ���� �ɸ��� ������
// iterative ������� �����Ͽ��� ��
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
// n �� �־�����
// n==1 �̸� 1�� ����ϰ� return
// f <= n �� �Ǻ���ġ �ִ밪 f�� ã��
// f==n �̸� f�� ��� �ϰ� return
// (n-f)>0 �̸� n=(n-f) �� ���� �ٽ� �Ǻ���ġ ������ ����Լ��� ã�´�

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

