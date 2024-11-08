#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int x, y,date=0;
	scanf("%d %d", &x, &y);
	
	int month[13] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	for (int i = 1; i < x; i++) {
		date += month[i];
	}
	date += y;
	date %= 7;
	
	switch (date) {
	case 0:
		printf("SUN");
		break;
	case 1:
		printf("MON");
		break;
	case 2:
		printf("TUE");
		break;
	case 3:
		printf("WED");
		break;
	case 4:
		printf("THU");
		break;
	case 5:
		printf("FRI");
		break;
	case 6:
		printf("SAT");
		break;
	}
	
}