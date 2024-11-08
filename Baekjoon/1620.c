#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 21

typedef struct {
    int original;
    int index;
    char name[MAX_NAME_LENGTH];
} Poke;

int compare(const void* a, const void* b) {
    return strcmp(((Poke*)a)->name, ((Poke*)b)->name);
}

int binary_search(Poke arr[], int size, char* target) {
    int left = 0, right = size - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        int cmp = strcmp(arr[mid].name, target);
        if (cmp == 0) {
            return arr[mid].index;
        }
        else if (cmp < 0) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, m;
    scanf("%d %d", &n, &m);

    Poke* poke = (Poke*)malloc(sizeof(Poke) * n);
    Poke* original = (Poke*)malloc(sizeof(Poke) * n);
    for (int i = 0; i < n; i++) {
        scanf("%s", poke[i].name);
        strcpy(original[i].name, poke[i].name);
        poke[i].index = i + 1;
        original[i].index = i + 1;
        
    }

    // Á¤·Ä
    qsort(poke, n, sizeof(Poke), compare);

    for (int i = 0; i < m; i++) {
        char a[MAX_NAME_LENGTH];
        scanf("%s", a);
        if (isdigit(a[0])) {
            int index = atoi(a);
            if (index >= 1 && index <= n) {
                printf("%s\n", original[index-1].name);
            }
            else {
                printf("Invalid index\n");
            }
        }
        else {
            int result = binary_search(poke, n, a);
            if (result != -1) {
                printf("%d\n", result);
            }
            else {
                printf("Name not found\n");
            }
        }
    }

    free(poke);
    return 0;
}
