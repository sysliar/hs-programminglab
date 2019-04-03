// 1�б� ���α׷��ַ� 
// Lab 4-2 Hanoi tower
#include <stdio.h>
int i = 1;
void hanoi_tower(int n, char from, char tmp, char to)
{
	if (n == 1) {
	printf("%d ���� 1�� %c ���� %c���� �ű��.\n", i++, from, to);
	}
	else {
		hanoi_tower(n - 1, from, to, tmp);
		printf("%d ���� %d�� %c���� %c���� �ű��.\n", i++, n, from, to);
		hanoi_tower(n - 1, tmp, from, to);
	}
}

void main()
{
	hanoi_tower(5, 'C', 'A', 'B');
}
