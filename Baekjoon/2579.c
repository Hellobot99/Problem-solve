#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX(a,b) a>b?a:b

#define _CRT_SECURE_NO_WARNINGS

int main() {

    int n,a=0;
    scanf("%d", &n);
    int* stair = (int*)malloc(sizeof(int) * n+10);
    int* score = (int*)malloc(sizeof(int) * n+10);


    for (int i = 0; i < n; i++) {
        scanf("%d", &stair[i+1]);
    }

    score[0] = 0;
    score[1] = stair[1];
    score[2] = stair[2]+stair[1];
    

    for (int i = 3; i < n+1; i++) {
        score[i] = stair[i] + (MAX(score[i - 3] + stair[i - 1], score[i - 2]));
    }
     
    printf("%d", score[n]);
 

    free(stair);
    free(score);
    return 0;
}