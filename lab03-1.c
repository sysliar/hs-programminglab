// Lab 3-1 : 현재 시간
//
//time_t : 시스템의 현재 시간을 가져온다. (1970년 기준 1초 단위로 증가 값)
//time_t time(time_t *timer);
//timer : 시간이 저장된 포인터의 위치
//반환값 : 1970년 1월 1일부터 경과한 시간을 돌려준다.
//ctime : UTC로 시간을 지역 설정(우리나라 표준시간)에 맞게 시간을 바꾸어 준다. 
//char *ctime(const time_t *timer);
//timer : 시간이 저장된 포인터
// struct tm *localtime(const time_t *timer) : 현재시간
#include <stdio.h>
#include <time.h>

//struct tm { /* a broken-down time */
//int tm_sec; /* seconds after the minute: [0 - 60] */
//int tm_min; /* minutes after the hour: [0 - 59] */
//int tm_hour; /* hours after midnight: [0 - 23] */
//int tm_mday; /* day of the month: [1 - 31] */
//int tm_mon; /* months since January: [0 - 11] */
//int tm_year; /* years since 1900 */
//int tm_wday; /* days since Sunday: [0 - 6] */
//int tm_yday; /* days since January 1: [0 - 365] */
//int tm_isdst; /* daylight saving time flag: <0, 0, >0 */
//};

int main()
{
	time_t now;
	struct tm *tp;	
	char *weeks[] = {"일", "월", "화", "수", "목", "금", "토"};
	time(&now); // now =time(NULL);
	printf("now = %d\n", now);
	printf("ctime() : %s", ctime(&now));
	tp = localtime(&now);
	printf("%d년 %d월 %d일 %s요일 %d시 %d분 %d초\n", tp->tm_year, tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	printf("%s", weeks[tp->tm_wday]);
	return 0;
}
//'일', '월', '화', '수', '목', '금', '토'