#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, m,q,b,f,sum;
	scanf("%d %d", &n, &m);
	int* a = (int*)malloc(sizeof(int) * n + 10);
	int* r = (int*)malloc(sizeof(int) * n + 10);
	for (int i = 0; i < n; i++) {
		scanf("%d", &q);
		a[i+1] = q;
	}
	r[0] = 0;
	for (int i = 0; i < n; i++) {
		r[i + 1] = a[i + 1] + r[i];
	}
	
	for (int i = 0; i < m; i++) {
		scanf("%d %d", &b, &f);
		if (b == f) {
			printf("%d\n", a[b]);
			continue;
		}
		printf("%d\n", r[f] - r[b-1]);
	}

	free(a);
	free(r);
}