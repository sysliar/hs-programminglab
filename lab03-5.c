// Lab3-5 �����ġ
#include <stdio.h> 
#include <stdlib.h> 
#include <time.h>
#include <conio.h>

void main(void ) 
{ 
	clock_t start, now; 
	clock_t duration, sec, min, hour, milsec;

	printf("Enter �� ���� CTRL-C ������ ����\n");
	getchar();
	start = clock();
	while (1) {
		now = clock();
		duration = now - start;
		sec = duration / CLOCKS_PER_SEC;
		milsec = duration % CLOCKS_PER_SEC;
		hour = sec / 3600;
		min = (sec / 3600) / 60;
		sec = sec % 60;
		printf("%d:%02d:%02d.%03d\r", hour, min, sec, milsec);
		if (kbhit()) {// �ƹ� key�� ������ �����Ѵ�.
			printf("\n");
			getch();
		}
			// break;
	}
	printf("\n");
} 
