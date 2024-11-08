#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int compare(const void* a, const void* b) {
	return (*(int*)a - *(int*)b);
}

main() {
	 
	int n,r1,r2,r3,r4,a=0,b=0,c=0,re=-1,ul,max=0,first=8001,second=8001,f=0;
	
	scanf("%d", &n);
	int* arr = (int*)malloc(sizeof(int) * n);
	int* counting = (int*)malloc(sizeof(int) * 8050);
	int* counting_a = (int*)malloc(sizeof(int) * 8050);

	for (int i = 0; i < 8050; i++) {
		counting[i] = 0;
	}

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
		a += arr[i];
		counting[arr[i] + 4000]++;
    }
	
	qsort(arr, n, sizeof(int), compare);	

	for (int i = 0; i < 8001; i++) {
		if (counting[i] > max)	max = counting[i];
	}
	
	for (int i = 0; i < 8001; i++) {
		if (counting[i] == max && first > i) first = i;
		else if (counting[i] == max && first < i && second > i)second = i, f=1;
	}
	if (f == 0)r3 = first-4000;
	else r3 = second-4000;

	r1 = round((double)a / (double)n);
	r2 = arr[n / 2];
	r4 = arr[n-1] - arr[0];

	printf("%d %d %d %d", r1, r2, r3, r4);

	free(counting);
	free(arr);

	return 0;
}