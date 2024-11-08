#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n[9], k[9],sum=0,b[6],c=0;
	for (int i = 0; i < 8; i++) {
		scanf("%d", &n[i]);
		k[i] = n[i];
	}
	qsort(k, 8, sizeof(int), compare);
	for (int i = 7; i >= 3; i--) {
		sum += k[i];
		for (int a = 0; a < 8; a++) {
			if (k[i] == n[a]) {
				b[c] = a+1;
				c++;
			}
		}
	}
	qsort(b, 5, sizeof(int), compare);
	printf("%d\n", sum);
	for (int i = 0; i < 5; i++) {
		printf("%d ", b[i]);
	}
}