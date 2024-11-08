#include <stdio.h>

int main() {

	int n, m;
	scanf("%d %d", &m, &n);
	int list[1000001] = { 0 };
	for (int i = 2; i * i <= n; i++) {
		if (!list[i]) { 
			for (int k = i * i; k <= n; k += i) { 
				list[k] = 1; 
			}
		}
	}
	if (m < 2) m = 2;
	for (int i = m; i < n + 1; i++) {
		if (!list[i]) printf("%d\n", i);
	}
	return 0;
}