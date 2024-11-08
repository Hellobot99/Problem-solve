#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
	int a,b,n,j,count=0;
	scanf("%d %d %d", &a, &b, &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &j);
		if (j == a) {
			a = j;
			continue;
		}
		
		if (a > b) {
			if (a < j) ;
			else if (a > j && j > b) {
				a = j;
				count = 1;
			}
			else if(a - b > b - j ) {
				a = j;
				count = 1;				
			}
		}
		if (a < b) {
			if (a > j);
			else if (a < j && j < b) {
				a = j;
				count = 1;
			}
			else if (b - a > j - b) {
				a = j;
				count = 1;
			}
		}
	}

    if (a > b) count += a - b;
	else if (a < b) count += b - a;	

	printf("%d", count);
	
}