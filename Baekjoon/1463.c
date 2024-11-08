#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
다이내믹 프로그래밍 bottom up 메모이제이션 쓴거임
1,2,3은 지정해줬고 4부터 n까지 순서대로 구함,
3,2로 나눴을때보다 -1한게 더 효율적이면 그걸 a[i]로 받아들임
*/

int main() {
    
    int n, count = 0,anw;
    scanf("%d", &n);
    int* a = (int*)malloc(sizeof(int) * (n+10));
    
    a[1] = 0, a[2] = 1, a[3] = 1;

    for (int i = 4; i < n+1; i++) {
        anw = a[i-1] + 1;
        if (i % 3 == 0 && anw > a[i / 3] + 1) anw = a[i / 3] + 1;
        if (i % 2 == 0 && anw > a[i / 2] + 1) anw = a[i / 2] + 1;
        a[i] = anw;
    }

    printf("%d", a[n]);

    free(a);

    return 0;
}
