#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n;
    long long a[91];
    a[0] = 0, a[1] = 1;
    scanf("%d", &n);
    for (int i = 2; i < n+1; i++) {
        a[i] = a[i - 1] + a[i - 2];
    }
    printf("%lld", a[n]);
    return 0;
}
