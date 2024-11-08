#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/*
���̳��� ���α׷��� bottom up �޸������̼� ������
1,2,3�� ��������� 4���� n���� ������� ����,
3,2�� ������������ -1�Ѱ� �� ȿ�����̸� �װ� a[i]�� �޾Ƶ���
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
