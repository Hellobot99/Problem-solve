#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n = 0,total = 1,count = 0;
    scanf("%d", &n);


    for (int i = 0; total < n; i++)
    {
        
        total += i * 6;
        count++;
        
    }
    
    if (n == 1)count = 1;

    printf("%d", count);

    return 0;
}
