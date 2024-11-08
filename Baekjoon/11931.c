#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n;
	scanf("%d", &n);
	int* a = (int*)malloc(sizeof(int) * n + 4);
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	qsort(a, n, sizeof(int), compare);
	for (int i = n - 1; i >= 0; i--) {
		printf("%d\n", a[i]);
	}
}