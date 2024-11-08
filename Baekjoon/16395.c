#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n, k;
	long long a=1,b=1;
	scanf("%d %d", &n, &k);
	
	if (n <= 2 || n == k || k == 1) printf("1");
	else {
		n--, k--;
		if (k > n / 2)k = n - k;

		for (int i = n-k+1; i < n + 1; i++) {
			a *= i;
		}
		for (int i = 1; i < k + 1; i++) {
			b *= i;
		}		
		
		printf("%lld", a/b);
	}
	
}