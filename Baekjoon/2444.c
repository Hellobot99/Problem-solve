#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 1; i < n+1; i++) 
    {
        for (int j = 0; j < n - i; j++)
        {
            printf(" ");
        }
        
        for (int k = 0; k < 2*i-1; k++) 
        {
            printf("*");
        }
        printf("\n");
    }

    for (int i = 1; i < n + 1; i++)
    {
        for (int j = 0; j < i; j++)
        {
            printf(" ");
        }
        
        for (int k = 2 * n - 2 * i; k > 1; k--)
        {
            printf("*");
        }
        printf("\n");
    }
   

    return 0;
}