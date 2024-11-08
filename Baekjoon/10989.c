#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n;
    scanf("%d", &n);

    int counting[10001] = { 0 };
    int a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a);
        counting[a]++;
    }

    for (int i = 0; i < 10001; i++)
    {
        for (int k = 0; k < counting[i]; k++)
        {
            printf("%d\n", i);
        }
    }
    
    return 0;
}
