#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n,a,b=0;
	scanf("%d", &n);
	a = n / 5;
	for (int i = a; i != 0; i--) {
		if ((n - i * 5) % 2 == 0) {
			b = (n - i * 5) / 2;
			a = i;
			break;
		}		
	}
	switch (n) {
	case 1:
		printf("-1");
		break;
	case 2:
		printf("1");
		break;
	case 3:
		printf("-1");
		break;
	case 4:
		printf("2");
		break;
	case 6:
		printf("3");
		break;
	case 8:
		printf("4");
		break;
	default:
		printf("%d", a + b);
		break;
	}	 
}