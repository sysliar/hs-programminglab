#include <stdio.h>
#include <math.h>


int main() {
	int num;
	int renum=0;
	int last, cor;
	int i = 1;
	int k;
	printf("정수 x 입력 : ");
	scanf("%d", &num);

	while (num/((int)pow(10, i)) != 0) {
		i++;
	}
	k = i;
	
	for (int j = 1; j <=k; j++)
	{
		i--;
		last = num % (int)pow(10, j) / (int)pow(10, j-1);
		renum = renum + last * (int)pow(10, i);
		num = num - last;
	}

	printf("뒤집은 수 y = %d 그 수의 두배 수 z = %d\n", renum, renum*2);

}