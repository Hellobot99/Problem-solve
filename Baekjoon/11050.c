#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main() 
{
   
    int n, k,a=1,b=1,c=1;
    
    scanf("%d %d", &n, &k);

    for (int i = 1; i < n+1; i++)
    {
        a *= i;
    }
    for (int i = 1; i < k + 1; i++)
    {
        b *= i;
    }
    for (int i = 1; i < n - k + 1; i++)
    {
        c *= i;
    }
       
    printf("%d", a / (b * c));

    return 0;
}