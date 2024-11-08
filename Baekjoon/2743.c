#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//단어 길이 재기
int main() {

	int a, b, c, d, i, k, j;
	char ar1[101];
	scanf("%s", &ar1);

	for (int i = 0; i < 101; i++) {
		if (ar1[i] == '\0') {
			printf("%d", i);
			break;
		}
	}
	
	return 0;
}