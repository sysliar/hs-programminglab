#include <stdio.h>

int find_room(int floor, int rooms, int num) {
	int a = (num / floor) + 1; // �ˉ�
	int b = num % floor; // 類熱

	 if (b == 0) { // 類熱 0橾陽 (裔 窕渠晦 類)
		 printf("%d", floor);
		 if (a < 10) printf("0%d", a);
		 else printf("%d", a);
		 printf("\n");
	}
	 else {
		 printf("%d", b);
		 if (a < 10) printf("0%d", a);
		 else printf("%d", a);
		 printf("\n");
	 }
}
int main() {
	int T;
	int H, W, N;
	
	scanf("%d", &T);

	for (int i = 0; i < T; i++) {
		scanf("%d %d %d", &H, &W, &N);
		find_room(H, W, N);
	}
}