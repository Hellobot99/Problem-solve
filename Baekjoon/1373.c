#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	char n[10000000];
	int a, b, c, d,e;
	scanf("%s", &n);
	e = strlen(n);
	a = strlen(n) % 3;

	if (e > 1) {
		b = n[0] - 48;
		c = n[1] - 48;
		switch (a) {
		case 1:
			printf("%d", b);
			break;
		case 2:
			printf("%d", 2 * b + c);
			break;
		default:
			break;
		}
		if (e > 2) {
			for (int i = a; i < e - a; i += 3) {
				b = n[i] - 48;
				c = n[i + 1] - 48;
				d = n[i + 2] - 48;
				printf("%d", 4 * b + 2 * c + d);
			}
		}
	}
	else if (e == 1) printf("%s", n);
}