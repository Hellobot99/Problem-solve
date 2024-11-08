#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//개수 세기
//총 N개의 정수가 주어졌을 때, 정수 v가 몇 개인지 구하는 프로그램을 작성하시오.
int main()

{
	int a,v,sum=0;
	int a1[100];
	scanf("%d", &a);

	for (int i = 0; i < a; i++) {
		scanf("%d", &a1[i]);
	}

	scanf("\n%d", &v);

	for (int i = 0; i < a; i++) {
		if (a1[i] == v)sum++;
	}

	printf("%d", sum);
	

	return 0;
}