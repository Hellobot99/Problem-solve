#include <stdio.h>

int main() {
	int n, t;
	long long p[101];
	p[1] = 1, p[2] = 1, p[3] = 1, p[4] = 2;
	for (int i = 5; i < 101; i++) {
		p[i] = p[i - 2] + p[i - 3];
	}

	scanf("%d", &t);

	for (int q = 0; q < t; q++) {
		scanf("%d", &n);		
		printf("%lld\n", p[n]);
	}
}