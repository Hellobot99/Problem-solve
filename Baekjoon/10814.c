#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS

typedef struct
{
    int age;
    char name[201];
}member;

int compare(const void* before, const void* after)
{
    //1이면 바꾸고 -1이면 안바꿈
    member* a = (member*)before;
    member* b = (member*)after;

    if (a->age > b->age)return 1;
    else if (a->age < b->age)return -1;
    else return 0;    
}

int main()
{
    int n;
    scanf("%d", &n);
    member *list = (member*)malloc(sizeof(member) * n);
    
    for (int i = 0; i < n; i++)
    {
        scanf("%d %s", &list[i].age, &list[i].name);
    }
    
    qsort(list, n, sizeof(list[0]), compare);

    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", list[i].age, list[i].name);
    }

    return 0;
}
