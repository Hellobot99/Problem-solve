#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n, k;
	scanf("%d %d", &n, &k);
	int* a = (int*)malloc(sizeof(int) * n + 10);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}	
	qsort(a, n, sizeof(int), compare);
	printf("%d", a[k - 1]);
	free(a);	
}