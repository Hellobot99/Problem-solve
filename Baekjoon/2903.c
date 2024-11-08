#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n,b,result,c=1,p=2;
    scanf("%d", &n);
    
    for (int i = 1; i < n+1; i++)
    {
        p += c;
        c *= 2;
    }

    printf("%d", p * p);
    
    return 0;
}