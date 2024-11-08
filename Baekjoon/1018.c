#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS


int main()
{
    int n,m,count_b=0,count_w=0,min=64;
    scanf("%d %d", &n, &m);


    
    char** arr = (char**)malloc(sizeof(char*) * n);
    for (int i = 0; i < n; i++) {
        arr[i] = (char*)malloc(sizeof(char) * (m + 1)); 
    }

    if (arr == NULL) exit(1);
       

    
    
    char board_b[8][9] = { {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'} };

    char board_w[8][9] = { {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'},
                           {'W', 'B', 'W', 'B', 'W', 'B', 'W', 'B','\0'},
                           {'B', 'W', 'B', 'W', 'B', 'W', 'B', 'W','\0'} };
    
    for (int i = 0; i < n; i++) 
    {
        scanf("%s", arr[i]);  
    }
    

    for (int w = 0; w < n - 7; w++)
    {
        for (int q = 0; q < m - 7; q++)
        {
            for (int i = 0; i < 8; i++)
            {
                for (int k = 0; k < 8; k++)
                {
                    if (arr[i+w][k+q] != board_b[i][k]) count_b++;
                    if (arr[i+w][k+q] != board_w[i][k]) count_w++;
                }
            }
            if (min > count_b) min = count_b; count_b = 0;
            if (min > count_w) min = count_w; count_w = 0;
            
        }
    }
    
   

    printf("%d", min);







   

    for (int i = 0; i < n; i++)
    {
        free(arr[i]);
    }
    free(arr);

    return 0;
}
