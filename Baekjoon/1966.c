#include <stdio.h>
#include <stdlib.h>

#define MAX_QUEUE_SIZE 101
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
	printf("���� ť�� ���� = ");
	if (q->size == 0) {
		printf("ť�� ����ֽ��ϴ�.");
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
		error("ť�� ��ȭ�����Դϴ�");
	else {
		q->rear = (q->rear + 1) % MAX_QUEUE_SIZE;
		q->data[q->rear] = item;
		q->size++;
	}
}

element dequeue(QueueType* q)
{
	if (is_empty(q))
		error("ť�� ��������Դϴ�");
	else {
		q->front = (q->front + 1) % MAX_QUEUE_SIZE;
		q->size--;
		return q->data[q->front];
	}
}

int main(void)
{
	QueueType queue;
	int choice, a, find, total, num,count,result=0;
	init_queue(&queue);

	scanf("%d", &a);
	for (int i = 0; i < a; i++) {
		count = -1;
		scanf("%d %d", &total,&find);
		for (int k = 0; k < total; k++) {
			scanf("%d", &num);
			enqueue(&queue, num);
		}
		while (is_empty(&queue) == 0) {
			for (int k = 1; count == find; k++) {
				if (queue.data[k] > queue.data[0]) {
					enqueue(&queue, dequeue(&queue));
				}
				else dequeue(&queue); count++;
			}
	   	}
	}
}