// Lab 3-2 : ?��?��?��?�� ?���?
//
#include <stdio.h>
#include <time.h>

int main()
{
	time_t now;
	struct tm *tp;
	char *weeks[] = { "��", "��", "ȭ", "��", "��", "��", "��" };
	
	while (1) {
		time(&now); // now =time(NULL);
		tp = localtime(&now);
		printf("%d�� %d�� %d�� %s���� %d�� %d�� %d��\r", tp->tm_year, tp->tm_mon, tp->tm_mday, weeks[tp->tm_wday], tp->tm_hour, tp->tm_min, tp->tm_sec);
	}
	return 0;
}
