// 1학기 프로그래밍랩 
// Lab 4-2 Hanoi tower
#include <stdio.h>
int i = 1;
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1) {
	printf("%d 원판 1을 %c 에서 %c으로 옮긴다.\n", i++, from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("%d 원판 %d을 %c에서 %c으로 옮긴다.\n", i++, n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

void main()
{
	hanoi_tower(5, 'C', 'A', 'B');
}
