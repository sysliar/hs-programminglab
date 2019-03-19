#include <stdio.h>
#include <string.h>

void reverse(char* re_arr, char* arr) {
	int size = strlen(arr);
	int ind = 0;
	for (int i = size-1; i >= 0; i--) {
		re_arr[ind] = arr[i];
		ind++;
	}
}

int main() {
	char str1[100];
	char str2[100];
	char str3[200];
	char str4[100] = { 0, };
	char temp[100];
	int len1, len2, len3, len4;

	printf("(1) 입력 str1 : ");
	scanf("%s", str1);
	printf("    입력 str2 : ");
	scanf("%s", str2);

	strcpy(str3, str1);
	strcpy(str1, str2);
	strcpy(str2, str3); //교환

	printf("(2) 교환 str1 = %s str2 = %s\nlen1 = %d len2 = %d\n", str1, str2, strlen(str1), strlen(str2));
	printf("(3) 복사 str3 = %s\n", str3);
	strcat(str3, " University Computer Engineering");
	printf("(4) 이어 붙이기 str3 = %s\nlen3 = %d\n", str3, strlen(str3));
	reverse(str4, str3);
	printf("(5) 뒤집기 str4 = %s\nlen4 = %d\n", str4, strlen(str4));

}