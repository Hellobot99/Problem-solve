#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

int array[41] = { 0, };

int fibonacci(int n) 
{
    array[0] = 0;
    array[1] = 1;
    array[2] = 1;
    if (n == 0) 
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else if (array[n]!=0)
    {
        return array[n];
    }
    else 
    {
        return array[n] = fibonacci(n-1) + fibonacci(n-2);        
    }
    
}

int main()
{
    int n,a;
    scanf("%d", &n);
    fibonacci(80);    

    for (int i = 0; i < n; i++)
    {        
        scanf("%d", &a);        
        if (a == 0) { printf("1 0\n"); }
        else
        {
            printf("%d %d\n", array[a - 1], array[a]);
        }
    }
    
    return 0;
}