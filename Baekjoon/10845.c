#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_QUEUE_SIZE 20000
typedef int element;
typedef struct {
	element  data[MAX_QUEUE_SIZE];
	int  front, rear, size;
} QueueType;

void init_queue(QueueType* q)
{
	q->front = 0, q->rear = 0, q->size = 0;
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
	int c, a;
	char com[30];
	init_queue(&queue);

	scanf("%d", &c);
	for (int i = 0; i < c; i++) {
		scanf("%s",com);
		if (0 == strcmp(com, "push")) {
			scanf("%d", &a);
			enqueue(&queue,a);
		}
		else if (0 == strcmp(com, "pop")) {
			printf("%d\n", dequeue(&queue));
		}
		else if (0 == strcmp(com, "size")) {
			printf("%d\n", queue.size);
		}
		else if (0 == strcmp(com, "empty")) {
			if (is_empty(&queue)) printf("1\n");
			else printf("0\n");
		}
		else if (0 == strcmp(com, "front")) {
			if (is_empty(&queue))printf("-1\n");
			else printf("%d\n", queue.data[queue.front+1]);
		}
		else if (0 == strcmp(com, "back")) {
			if (is_empty(&queue))printf("-1\n");
			else printf("%d\n", queue.data[queue.rear]);
		}		
	}
	return 0;
}