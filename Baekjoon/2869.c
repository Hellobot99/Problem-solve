#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main() {
    int a, b, v, c;
    scanf("%d %d %d", &a, &b, &v);

    c = (v - a) / (a - b);

    if ((v - a) % (a - b) == 0) 
    {
        printf("%d\n", c + 1);
    }
    else 
    {
        printf("%d\n", c + 2);
    }

    return 0;
}