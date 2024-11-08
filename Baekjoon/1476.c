#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {

	int e, s, m;
	scanf("%d %d %d", &e, &s, &m);
	
	for (int i = 1; i < 8000; i++) {
		if ((i - e) % 15 == 0 && (i - s) % 28 == 0 && (i - m) % 19 == 0) {
			printf("%d", i);
			break;
		}
	}	
}