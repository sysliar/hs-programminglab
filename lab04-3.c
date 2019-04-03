//  1�б� ���α׷��ַ� 
// Lab 4-3 Hanoi tower �߰����� ���
#include <stdio.h>

// ž�� ����� ������ ���� � ������ �ִ��� �����ϴ� ����
// �ʱ� ���� 
// A �� 4,3,2,1 �� �ִٸ�
// ž�� ��� ������ �ִ��� ���� : nplates[0] = 4
// ž�� ���� ���� tower[0][0 ~ 3] => 4, 3, 2, 1
// 1 �� B �� �������ٸ�
// nplates[0] = 3, nplates[1] = 1
// tower[0][0 ~ 2] = 4, 3, 2
// tower[1][0] = 1

int nplates[3]; // ž�� ��� ������ �ִ���
int tower[3][100]; // � ���ǵ��� �ִ��� ����

// ž�� ���� ���¸� ǥ���Ѵ�.
void print_tower()
{
	int i; // tower ��ȣ
	int j; 
	// tower[][] ������ �����ش�
	// ...
	printf("\n");
	printf("���� Enter : ");
	getchar(); // getchar() �� ��� ����Ѵ�.
	fflush(stdin);
}
// �ϳ��� ������ �̵��� �� ���� ��ü ž�� ���� ���¸� �����Ѵ�.
void move_one(int n, char from, char to)
{
	printf("\n���� %d�� %c���� %c�� �ű��.\n", n, from, to);
	// nplates[] �� tower[][] ������ �����Ѵ�
	// from ������ ���� ���� ������ ����
	// to ���� ���� ���� ������ �߰��ϰ�
	// nplates[] ���� ����/���� �Ѵ�.
	// �̵��� �߻��� �� ���� print_tower() ȣ��
	print_tower();

}


// Ÿ�������� �ʱ�ȭ �Ѵ�.
void init_tower(int n, char start)
{
	int i, tower_no;
	//ž�� ��ȣ A, B, C -> 0, 1, 2
	tower_no = start - 'A';
	// tower[][] ����� nplates[]�� �ʱ�ȭ �Ѵ�.
	// tower[0][0]~[0][3] = 4, 3, 2, 1 ������
	// nplates[] �� ������ ���� ����Ų��..

}

void hanoi_tower(int n, char from, char tmp, char to)
{
	if( n==1 ) 
		move_one(1, from, to); // ���� ���� �ִ� 1�� ������ �̵�

	else {
		hanoi_tower(n-1, from, to, tmp); // 1 ~ n-1 �� �ӽ� ��ҿ� �̵�
		move_one(n, from, to); // ���� �ؿ� �ִ� ������ �̵�
		hanoi_tower(n-1, tmp, from, to); // 1 ~ n-1 �� �ӽ� ��ҿ��� �������� �̵�
	}
}

void main()
{
	init_tower(4, 'A'); // �ʱ� ����, 1~4 ������ A �� �ִ�.
	printf("�ʱ� ����\n");
	print_tower();
	hanoi_tower(4, 'A', 'B', 'C');
}
