#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n = 0, m = 0, a[101], max = 0;
    scanf("%d %d", &n, &m);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for (int i = 0; i < n ; i++)
    {
        for (int k = i + 1; k < n ; k++)
        {
            for (int j = k + 1; j < n ; j++)
            {
                if (a[i] + a[k] + a[j] > max && a[i] + a[k] + a[j] <= m) max = a[i] + a[k] + a[j];
            }
        }
    }

    printf("%d", max);

    return 0;
}
