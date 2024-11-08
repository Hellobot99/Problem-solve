#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n, m, t;
    unsigned long long a, b, c;
    scanf("%d", &t);
    
    for (int q = 0; q < t; q++) {
        a = 1, b = 1, c = 1;
        scanf("%d %d", &n, &m);
        if (n > m / 2)n = m - n;
        for (int i = m-n+1; i < m+1; i++) {
            a *= i;
        }
        
        for (int i = 1; i < n + 1; i++) {
            b *= i;
        }         
        
        printf("%llu\n", a/b);
    }   

    return 0;
}