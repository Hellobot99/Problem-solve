#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS

int main()
{
    int a, b, m=1, n, q=1;

    scanf("%d %d", &a, &b);

    
    int min = (a < b) ? a : b;

    for (int i = 1; i < min+1; i++)
    {
        if (a % i == 0 && b % i == 0)
        {
            q = i;
        }
    }
    if (a==b)q=b;

    printf("%d\n", q);
    

    for (int i = 1; m==1; i++)
    {
        if (i % a == 0 && i % b == 0)
        {
            m = i; break;
        }
    }

    printf("%d", m);

    return 0;
}
