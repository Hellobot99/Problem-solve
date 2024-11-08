#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n,b,count=-1,a[100];
    scanf("%d %d", &n, &b); 
    while (1) {
        if (n < b) {
            count++;
            a[count] = n % b;
            break;
        }
        else {
            count++;
            a[count] = n % b;
            n /= b;
        }       
     }
    for (int i = count; i >= 0; i--) {
        if (a[i] < 10) {
            printf("%d", a[i]);
        }
        else {
            printf("%c", a[i] + 55);
        }
    }    
    return 0;
}
