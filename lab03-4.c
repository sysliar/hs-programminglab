	// Lab3-4 ����/���� �� ���� �ð� ����
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
		printf("���� : %s",   ctime(&now) );
		start = clock();
		for (i=1;i<=100000;i++)
			for (j=1;j<10000;j++)
				k++;

		finish = clock();
		time(&now);

		printf("���� : %s", ctime(&now));
		duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("����ð� = %f ���Դϴ�.\n\n", duration); 
		time(&now);
		tp = localtime(&now); 
		printf("���� : %02d:%02d:%02d\n", 
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
		printf("���� : %02d:%02d:%02d\n",
			tp->tm_hour,
			tp->tm_min,
			tp->tm_sec
		);	duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("����ð� = %f ���Դϴ�.\n", duration); 
	} 


	/*// Lab3-4 ����/���� �� ���� �ð� ����
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
		printf("���� : %s %s %d %s %d", weeks[(tp->tm_wday)-1], months[(tp->tm_mon)-1], tp->tm_mday, ctime(&now), tp);
		start = clock();
		for (i=1;i<=10000;i++)
			for (j=1;j<10000;j++)
				k++;
		finish = clock();
		time(&now);
		// printf("���� : %s",    );
		duration = duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("����ð� = %f ���Դϴ�.\n\n", duration); 

		time(&now);
		//tp =  
		// printf("���� : %02d:%02d:%02d\n",     );
		//start = 
		for (i=1;i<=100000;i++)
			for (j=1;j<100000;j++)
				k++;
		// finish = 
		time(&now);
		// tp = 
		//printf("���� : %02d:%02d:%02d\n",      );
		duration = duration = (double)(finish - start) / CLOCKS_PER_SEC;
		printf("����ð� = %f ���Դϴ�.\n", duration); 
	} 
	*/