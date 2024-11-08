#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{

    int n,a = 0,b = 0;
    scanf("%d", &n);
    
    a = n / 5, b = n % 5;
    if (b % 3 == 0)a = n / 5, b = n % 5;
    else if ((b + 5) % 3 == 0)a -= 1, b += 5;
    else a -= 2, b += 10;

    if (n == 1 || n == 2 || n == 4 || n == 7) printf("-1");
    else printf("%d", a + (b / 3));



    return 0;
}
