#include <stdio.h>

int main() {
	char str[7] = {0, }; // 엔터까지

	printf("주민번호 앞자리 : ");
	scanf("%s", str);
	printf("19%c%c년 %c%c월 %c%c일 입니다.\n", str[0], str[1], str[2], str[3], str[4], str[5]);
}