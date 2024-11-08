#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n,a,b,c,d,e,f,r1,r2;
    scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f);
    
    // ax + by = c , dx + ey = f

    for (int x = -999; x < 1000; x++)
    {
        for (int y = -999; y < 1000; y++)
        {
            if ((a * x) + (b * y) == c && (d * x) + (e * y) == f){printf("%d %d", x, y); break;}        
        }
    }

    return 0;
}