#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
	int a[10] = { 0 }, n, b,c,d=0;
	scanf("%d %d", &n,&b);
	for (int i = 1; i < n + 1; i++) {
		c = i;
		while (c !=0) {
			if (c < 10) {
				if (c == b) d++;
				break;
			}
			else if (c == 10) {
				if (b == 0 || b == 1) d++;
				break;
			}
			else {
				if (c % 10 == b) d++;
				c /= 10;
			}								
	 	 }
	}
	printf("%d", d);
}
