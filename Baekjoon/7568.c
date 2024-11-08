#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n, x[51], y[51], grade[51];
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &x[i], &y[i]);
        grade[i] = 1;
    }
    
    for (int i = 0; i < n; i++)
    {
        for (int k = 0; k < n; k++)
        {
            if (x[i] < x[k] && y[i] < y[k]) grade[i]++;     
            if (grade[k] > n)grade[k]=n;
        }
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("%d ", grade[i]);
    }

    return 0;
}