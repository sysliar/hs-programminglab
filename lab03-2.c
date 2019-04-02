// Lab 3-2 : ?궡?븘?엳?뒗 ?떆怨?
//
#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;
	struct tm *tp;
	char *weeks[] = { "일", "월", "화", "수", "목", "금", "토" };
	
	while (1) {
		time(&now); // now =time(NULL);
		tp = localtime(&now);
		printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\r", tp->tm_year, tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}
