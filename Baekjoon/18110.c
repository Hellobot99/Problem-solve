#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

main() {
	
	int n,low,high,a,sum=0,b;
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);

	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}

	qsort(arr, n, sizeof(int), compare);

	a = round((double)n * 0.15 );
	low = a, high = n - a;
	
	for (int i = low; i < high; i++) {
		sum += arr[i];
	}
	double c = n - (2 * a);
	b = round((double)sum / c);
	
	if (n == 0) printf("0");
	else printf("%d\n", b);

	return 0;
}