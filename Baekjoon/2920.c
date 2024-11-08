#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a[9],b=0,c=0;
    
    for (int i = 0; i < 8; i++)
    {
        scanf("%d", &a[i]);
        if (a[i] == i + 1) { b++; }
        if (a[i] == 8 - i) { c++; }
    }

    if (b == 8) { printf("ascending"); }
    if (c == 8) { printf("descending"); }
    if (b != 8 && c != 8) { printf("mixed"); }
    
    return 0;
}
