#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, a[1001];
	scanf("%d", &n);

	a[0] = 0, a[1] = 1, a[2] = 2;

	for (int i = 3; i < n + 1; i++) {
		a[i] = (a[i - 1] + a[i - 2] ) % 10007;
	}

	printf("%d", a[n]);

}