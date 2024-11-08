#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//문자와 문자열

int main() {

	char str[1000];
	int a;
	
	scanf("%s", &str);
	scanf("%d", &a);
	printf("%c", str[a-1]);

	return 0;
}