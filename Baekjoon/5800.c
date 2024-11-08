#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

int main() {
	int k,n[51],b,max,min,gap;
	scanf("%d", &k);
	for (int i = 0; i < k; i++) {
		max = 0, min = 100, gap=0;
		scanf("%d", &b);
		for (int j = 0; j < b; j++) {
			scanf("%d", &n[j]);
			if (n[j] > max)max = n[j];
			if (n[j] < min)min = n[j];
		}
		qsort(n, b, sizeof(int), compare);
		for (int j = 0; j < b-1; j++) {
			if (n[j + 1] - n[j] > gap) gap = n[j + 1] - n[j];
		}
		printf("Class %d\n", i + 1);
		printf("Max %d, Min %d, Largest gap %d\n", max, min, gap);		
	}	
}