#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int s[20] = { 0 };

void add(int x) {
    if (s[x] == 0) s[x] = 1;
}

void remov(int x) {
    if (s[x] == 1) s[x] = 0;
}

void check(int x){
    printf("%d\n", s[x]);
}

void toggle(int x){
    if (s[x] == 0) s[x] = 1;
    else if (s[x] == 1) s[x] = 0;
}

void all(void){
    for (int i = 1; i < 21; i++) {
        s[i] = 1;
    }
}

void empty(void){
    for (int i = 1; i < 21; i++) {
        s[i] = 0;
    }
}

int main()
{   
    int m, b;
    char a[10];
    scanf("%d", &m);

    for (int i = 0; i < m; i++) {
        scanf("%s %d", a, &b);
        if (strcmp(a, "add") == 0) {
            add(b); continue;
        }
        else if (strcmp(a, "remove") == 0) {
            remov(b); continue;
        }
        else if (strcmp(a, "check") == 0) {
            check(b); continue;
        }
        else if (strcmp(a, "toggle") == 0) {
            toggle(b); continue;
        }
        else if (strcmp(a, "all") == 0) {
            all(); continue;
        }
        else if (strcmp(a, "empty") == 0) {
            empty();
        }          
    }

    return 0;
}