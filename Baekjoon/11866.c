#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 1020
typedef int element;
typedef struct {
	element  data[MAX_QUEUE_SIZE];
	int  front, rear, size;
} QueueType;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
}

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
		error("큐가 포화상태입니다");
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
		q->size++;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("큐가 공백상태입니다");
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		q->size--;
		return q->data[q->front];
	}
}

int main(void)
{
	QueueType queue;
	int choice, a,b,c;
	init_queue(&queue);
	scanf("%d %d", &a,&b);
	for (int i = 0; i < a; i++) {
		enqueue(&queue, i + 1);
	}
	printf("<");
	while (is_empty(&queue) == 0) {
		for (int i = 0; i < b-1; i++) {
			enqueue(&queue, dequeue(&queue));
		}
		printf("%d", dequeue(&queue));
		if (queue.size > 0) printf(", ");
	}
	printf(">");

}