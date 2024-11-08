#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int x, y,z,a,b,c,d;
    scanf("%d %d", &x, &y);
    if (x > 9 && x < 100) {
        a = x % 10;
        b = x / 10;
        x = a * 10 + b;
    }
    else if (x == 1000) x = 1;
    else if (x > 99) {
        a = x % 10;
        b = x % 100 / 10;
        c = x / 100;
        x = a * 100 + b * 10 + c;
    }
    

    if (y > 9 && y < 100) {
        a = y % 10;
        b = y / 10;
        y = a * 10 + b;
    }
    else if (y == 1000) y = 1;
    else if (y > 99) {
        a = y % 10;
        b = y % 100 / 10;
        c = y / 100;
        y = a * 100 + b * 10 + c;
    }
    
    z = x + y;

    if (z > 9 && z < 100) {
        a = z % 10;
        b = z / 10;
        z = a * 10 + b;
    }    
     else if (z > 99 && z < 1000) {
        a = z % 10;
        b = z % 100 / 10;
        c = z % 1000 / 100;
        z = a * 100 + b * 10 + c;
     }
     else if (z > 999) {
        a = z % 10;
        b = z % 100 / 10;
        c = z % 1000 / 100;
        d = z % 10000 / 1000;
        z = a * 1000 + b * 100 + c * 10 + d;
     }
    printf("%d",z);
    
}
