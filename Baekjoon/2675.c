#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a,b;
    char s[22];
    scanf("%d\n", &a);
    

    for (int i = 0; i < a; i++) {
        scanf("%d %s", &b, &s);
        for (int y = 0; y < strlen(s); y++) {
            for (int u = 0; u < b; u++) {
                printf("%c", s[y]);
            }
        }
        printf("\n");
    }

    return 0;
}