#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main()
{
        
    int k, n, a=0,b=0,c=0,max=0;
    scanf("%d %d", &k, &n);
    int length[10001];

    for (int i = 0; i < k; i++)
    {
        scanf("%d", &length[i]);
        if (length[i] > max)max = length[i];
    }

    int left, middle, right;
    left = 1, right = max, middle = (left + right) / 2;

    




    
    return 0;
}
