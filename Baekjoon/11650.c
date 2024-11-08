#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct
{
    int x;
    int y;
}grid;

int compare(const void* before, const void* after)
{
    //1이면 바꾸고, -1이면 패스, 0이면 패스
    grid* a = (grid*)before;
    grid* b = (grid*)after;

    if (a->x > b->x)return 1;
    else if (a->x == b->x && a->y > b->y) return 1;
    else return 0;
}

int main()
{
    int n;
    scanf("%d", &n);
    
    grid * list = (grid *)malloc(sizeof(grid)*n);
   
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d", &list[i].x, &list[i].y);
    }

    qsort(list, n, sizeof(list[0]), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %d\n", list[i].x, list[i].y);
    }

    free(list);

    return 0;
}