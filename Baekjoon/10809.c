#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char s[101];
    char t[] = "abcdefghijklmnopqrstuvwxyz";
    scanf("%s", &s);

    for (int k = 0; k < 26; k++) {
        for (int i = 0; i < 101; i++) {
            if (s[i] == t[k]) { printf("%d ", i); break; }
            if (s[i] == '\0') { printf("-1 ");  break; }
        }
    }

    return 0;
}