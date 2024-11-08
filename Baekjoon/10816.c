#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int lowerBound(int start, int end, int key, int arr[]) {
    while (start < end) {
        int mid = (start + end) / 2;
       
        if (arr[mid] < key) {
            start = mid + 1;
        }
        
        else { 
            end = mid;
        }
    }
    return end;
}

int upperBound(int start, int end, int key, int arr[]) {
    while (start < end) {
        int mid = (start + end) / 2;
      
        if (arr[mid] <= key) {
            start = mid + 1;
        }
       
        else { 
            end = mid;
        }
    }
    return end;
}


int main() {

    int a1, a2, b;

    scanf("%d", &a1);

    int* arr1 = (int*)malloc(sizeof(int) * a1);

    for (int i = 0; i < a1; i++) {
        scanf("%d", &arr1[i]);
    }

    qsort(arr1, a1, sizeof(int), compare);

    scanf("%d", &a2);
    for (int i = 0; i < a2; i++) {
        scanf("%d", &b);
        printf("%d ", upperBound(0, a1, b, arr1)- lowerBound(0, a1, b, arr1));
    }

    free(arr1);

    return 0;
}