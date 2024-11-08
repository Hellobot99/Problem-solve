#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int n,a[11],size=0;
	scanf("%d", &n);
	for (int i = 0; i < 11; i++) {
		if (n < 10) {
			a[i] = n;
			size++;
			break;
		}
		a[i] = n % 10;
		n = (n - a[i]) / 10;
		size++;
	}	
	qsort(a, size, sizeof(int), compare);

	for (int i = size-1; i >= 0; i--) {
		printf("%d", a[i]);
	}
}