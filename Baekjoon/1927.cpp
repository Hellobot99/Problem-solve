#include <stdio.h>
#include <stdlib.h>
#define MAX_ELEMENT 100001

typedef struct {
	int key;
}element;
typedef struct {
	element heap[MAX_ELEMENT];
	int heap_size;
}HeapType;

HeapType* create_heap();
void init_heap(HeapType* heap);
void insert_min_heap(HeapType* h, element item);
element delete_min_heap(HeapType* h);

int main() {
	int n,m,arr_size=0;
	HeapType* heap = create_heap();
	element deleted,input;
	scanf("%d", &n);
	element* arr = (element*)malloc(sizeof(n));
	for (int i = 0; i < n; i++) {
		scanf("%d", &m);
		if (m == 0 && arr_size == 0) printf("0\n");
		else if (m == 0) {
			deleted = delete_min_heap(heap);
			printf("%d\n", deleted.key);
			arr_size--;
		}
		else {
			input.key = m;
			insert_min_heap(heap, input);
			arr_size++;
		}
	}
	return 0;
}

HeapType* create_heap() {
	HeapType* heap = (HeapType*)malloc(sizeof(HeapType));
	if (heap == NULL) {
		printf("메모리 할당 실패\n");
		return NULL;
	}
	heap->heap_size = 0;
	return heap;
}
void init_heap(HeapType* heap) {
	heap->heap_size = 0;
}

void insert_min_heap(HeapType* h, element item) {
	int a;
	a = ++(h->heap_size);

	while (a != 1 && h->heap[a / 2].key > item.key) {
		h->heap[a] = h->heap[a / 2];
		a /= 2;
	}
	h->heap[a] = item;
}

element delete_min_heap(HeapType* h) {
	int parent = 1, child = 2;
	element item = h->heap[1];
	element temp = h->heap[(h->heap_size)--];
	while (child <= h->heap_size) {
		if (child < h->heap_size && h->heap[child].key > h->heap[child + 1].key) child++;
		if (temp.key <= h->heap[child].key) break;
		h->heap[parent] = h->heap[child];
		parent = child;
		child *= 2;
	}
	h->heap[parent] = temp;
	return item;
}