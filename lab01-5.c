#include <stdio.h>

int main() {
	char str[7] = {0, }; // ���ͱ���

	printf("�ֹι�ȣ ���ڸ� : ");
	scanf("%s", str);
	printf("19%c%c�� %c%c�� %c%c�� �Դϴ�.\n", str[0], str[1], str[2], str[3], str[4], str[5]);
}