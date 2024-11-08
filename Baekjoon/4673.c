#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
	int n = 20, k, hun, ten, one, tho, a[15000] = { 0 };
	printf("1\n");
	
	for (int i = 1; i < 9995;i++) {
		one = i % 10;
		ten = i % 100 / 10;
		hun = i % 1000 / 100;
		tho = i / 1000;
		if (i < 10)a[2 * i] = 1;
		else if (i < 100)a[i + one + ten] = 1;
		else if (i < 1000)a[i + one + ten + hun] = 1;
		else a[i + one + ten + hun + tho] = 1;
	}
	for (int i = 2; i < 9995; i++) {
		if (a[i] == 0)printf("%d\n", i);
	}

}