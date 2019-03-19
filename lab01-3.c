#include <stdio.h>

int week(int month);
void write_date(int num, int day);
int datearr[12] = { 31, 28, 31, 30, 31, 30, 31, 30, 31, 30, 31, 30 };

int main() {
	int month;
	int date, day;

	printf("출력 월을 입력 : ");
	scanf("%d", &month);
	printf(" 일 월 화 수 목 금 토\n");
	day = week(month);
	date = datearr[month - 1];
	if (month == 1) {
		write_date(date, day);
	}
	else {
		write_date(date, day);
	}
	printf("\n");
	return 0;
}

int week(int month) {
	int date = 0;
	int day = 1;
	for (int i = 0; i < month - 1; i++)
		date = date + datearr[i];
	day = day + (date % 7);
	if (day == 7)
		day = 0;
	return day;
}

void write_date(int date, int day) {
	int cnt = day;
	for (int i = 0; i < day; i++)
	{
		printf("  ");
	}
	for (int i = 1; i <= date; i++)
	{
		cnt++;
		if (i < 10) {
			printf("  ");
		}
		else {
			printf(" ");
		}
		printf("%d", i);
		if (cnt % 7 == 0) {
			printf("\n");
		}
	}
}