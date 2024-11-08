#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 500000
typedef int element;
typedef struct {
	element  *data;
	int  front, rear, size;
} QueueType;

void init_queue(QueueType* q)
{
	q->front = 0, q->rear = 0, q->size = 0;
	q->data = (element *)malloc(MAX_QUEUE_SIZE * sizeof(element));
}

int is_empty(QueueType* q)
{
	return (q->front == q->rear);
}

int is_full(QueueType* q)
{
	return ((q->rear + 1) % MAX_QUEUE_SIZE == q->front);
}

void queue_print(QueueType* q)
{
	int i;
	printf("현재 큐의 상태 = ");
	if (q->size == 0) {
		printf("큐가 비어있습니다.");
	}
	else {
		for (i = q->front + 1; i != q->rear; i = (i + 1) % MAX_QUEUE_SIZE) {
			printf("%d ", q->data[i]);
		}
		printf("%d ", q->data[i]);
	}
	printf("\n");
}

void enqueue(QueueType* q, element item)
{
	if (is_full(q))
		;
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
		q->size++;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		return -1;
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		q->size--;
		return q->data[q->front];
	}
}

int main(void)
{
	QueueType queue;
	int a;
	init_queue(&queue);

	scanf("%d", &a);

	for (int i = 1; i < a + 1; i++) {
		enqueue(&queue, i);
	}
	while (queue.size != 1) {
		dequeue(&queue);
		
		if (queue.size == 1) break;
		queue.rear = (queue.rear + 1) % MAX_QUEUE_SIZE;
		queue.data[queue.rear] = dequeue(&queue);
		queue.size++;
		
	}
	printf("%d\n", dequeue(&queue));
	
	free(queue.data);
	return 0;
}