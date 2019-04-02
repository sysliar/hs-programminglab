	// Lab3-4 시작/종료 및 실행 시간 측정
	#include <stdio.h> 
	#include <stdlib.h> 
	#include <time.h> 
	void main(void ) 
	{ 
		clock_t start, finish; 
		double  duration; 
		int i, j, k = 0;
		time_t now;
		struct tm *tp;
		time(&now);
		printf("시작 : %s",   ctime(&now) );
		start = clock();
		for (i=1;i<=100000;i++)
			for (j=1;j<10000;j++)
				k++;

		finish = clock();
		time(&now);

		printf("시작 : %s", ctime(&now));
		duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("실행시간 = %f 초입니다.\n\n", duration); 
		time(&now);
		tp = localtime(&now); 
		printf("시작 : %02d:%02d:%02d\n", 
			tp->tm_hour,
			tp->tm_min,
			tp->tm_sec
		);
		start = clock();
		for (i=1;i<=100000;i++)
			for (j=1;j<10000;j++)
				k++;
		finish = clock();
		time(&now);
		tp = localtime(&now);
		printf("시작 : %02d:%02d:%02d\n",
			tp->tm_hour,
			tp->tm_min,
			tp->tm_sec
		);	duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("실행시간 = %f 초입니다.\n", duration); 
	} 


	/*// Lab3-4 시작/종료 및 실행 시간 측정
	#include <stdio.h> 
	#include <stdlib.h> 
	#include <time.h> 
	void main(void ) 
	{ 
		clock_t start, finish; 
		double  duration; 
		int i, j, k = 0;
		time_t now;
		struct tm *tp;
		char *weeks[] = {"Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat"};
		char *months[] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
		tp = localtime(&now);
		// char *ctime(&now);

		time(&now);
		printf("시작 : %s %s %d %s %d", weeks[(tp->tm_wday)-1], months[(tp->tm_mon)-1], tp->tm_mday, ctime(&now), tp);
		start = clock();
		for (i=1;i<=10000;i++)
			for (j=1;j<10000;j++)
				k++;
		finish = clock();
		time(&now);
		// printf("종료 : %s",    );
		duration = duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("실행시간 = %f 초입니다.\n\n", duration); 

		time(&now);
		//tp =  
		// printf("시작 : %02d:%02d:%02d\n",     );
		//start = 
		for (i=1;i<=100000;i++)
			for (j=1;j<100000;j++)
				k++;
		// finish = 
		time(&now);
		// tp = 
		//printf("종료 : %02d:%02d:%02d\n",      );
		duration = duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("실행시간 = %f 초입니다.\n", duration); 
	} 
	*/