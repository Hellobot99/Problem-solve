#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
    int a, floor, room, cus, before, after;
    scanf("%d", &a);
    for (int i = 0; i < a; i++)
    {
        scanf("%d %d %d", &floor, &room, &cus);

        if (cus % floor == 0) { before = floor; }
        else { before = cus % floor; }

        if (cus % floor == 0) { after = cus / floor; }
        else { after = cus / floor + 1; }

        if (after <= 9) { printf("%d0%d\n", before, after); }
        else { printf("%d%d\n", before, after); }
    }

    return 0;
}

