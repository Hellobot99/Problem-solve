#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    char a[101];
    scanf("%s", &a);
    for(int i=0;i<strlen(a);i++)
    {
        if (a[strlen(a) - 1 - i] != a[i]) { printf("0"); break; }
        if (i == strlen(a) - 1) printf("1");
    }

    return 0;
}
