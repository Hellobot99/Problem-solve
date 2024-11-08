#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//숫자의 합

int main()

{
	long long a = 0;
	long long b=1,total=0;

	scanf("%lld", &a);
	scanf("%lld", &b);
	
	for (long long j = 0; j < a; j++) {
		total = total + (b % 10);
		b = b / 10;
		
	}
		
	printf("%lld", total);

	return 0;
}