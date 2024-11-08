#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int a, b,n[1010],sum=0,count=0,c=1,d=1;
	scanf("%d %d", &a, &b);
	for (int i = 1; i < 500; i++) {
		if (c >= 1001)break;
		for (int k = 0; k < d; k++) {
			n[c] = i;
			c++;			
			if (c >= 1001)break;
		}
		d++;
	}
	for (int i = a; i < b + 1; i++) {
		sum += n[i];
	}
	printf("%d", sum);	
}