#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS




int main()
{
    int T,k,n;
    scanf("%d", &T);

    for (int m = 0; m < T; m++)
    {
        scanf("%d %d", &k, &n);
               

        int a[15][15] = {0};
        

        for (int i = 1; i < 15; i++)
        {
            a[0][i] = i;
        }

        for (int i = 1; i < k+1; i++)
        {
            for (int j = 1; j < n+1; j++)
            {
                for (int h = 1; h < j+1; h++)
                {
                    a[i][j] += a[i - 1][h];
                }
            }
        }

        printf("%d\n", a[k][n]);
    }
       
    return 0;
}
