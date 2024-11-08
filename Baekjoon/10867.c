#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n, b[2001] = { 0 },c,d=0;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n + 4);
	for (int i = 0; i < n; i++) {
		scanf("%d", &c);
		if (b[c+1000] == 0) {
			b[c+1000] = 1;
			a[d] = c;
			d++;
		}		
	}	
	qsort(a, d, sizeof(int), compare);
	for (int i = 0; i < d; i++) {
		printf("%d ", a[i]);
	}
	free(a);
}