#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {

    int n, p[1001],sum=0;

    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        scanf("%d", &p[i]);
    }

    qsort(p, n, sizeof(int), compare);

    for (int i = 0; i < n; i++) {
        sum += p[i] * (n - i);
    }

    printf("%d", sum);

    return 0;
}