#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define _CRT_SECURE_NO_WARNINGS


int main() {
    int n, k,coin[12],count=0;
    scanf("%d %d", &n, &k);
    int i = n - 1;

    for (int i = 0; i < n; i++) {
        scanf("%d", &coin[i]);
    }
    while (k != 0) {
        if (k >= coin[i]) {
            k -= coin[i];
            count++;
        }
        else i--;
     }
    printf("%d", count);

    return 0;
}