#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char num[] = "112228";
    int a, b = 0;
    for (int i = 0; i < 6; i++) {
        scanf("%d", &a); printf("%d ", num[i]-'0'- a);
    }
    
    return 0;
}
