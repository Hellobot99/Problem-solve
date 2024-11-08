#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	if (*(double*)a < *(double*)b) return -1;
	if (*(double*)a > *(double*)b) return 1;
	return 0;
}

int main() {
	int n;
	scanf("%d", &n);
	double* a = (double*)malloc(sizeof(double) * (n+2));	
	for (int i = 0; i < n; i++) {
		scanf("%lf", &a[i]);
	}
	qsort(a, n, sizeof(double), compare);

	for (int i = 0; i < 7; i++) {
		printf("%3.3f\n", a[i]);
	}

	free(a);
}