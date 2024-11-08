#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n,a,count=0;
	scanf("%d", &n);
	for (int i = n; i != n||count==0;) {
		a = i;
		if (i < 10) i = 10 * i + i;
		else i = (i / 10 + i % 10) % 10 + (i % 10) * 10;
		count++;
	}
	printf("%d", count);
}