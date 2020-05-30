#include <stdio.h>
#include <malloc.h>

typedef int element;
typedef struct QueueNode {
    element item;     
struct QueueNode* link;
} QueueNode;

typedef struct {
    QueueNode* front, * rear; 
}LinkedQueueType;

void error(char* message) {
    fprintf(stderr, " %s\n", message); 
}

void init(LinkedQueueType* q) { q->front = q->rear = NULL; }  //�ʱ�ȭ````
int isEmpty(LinkedQueueType* q) { return (q->front == NULL); } //����

void enqueue(LinkedQueueType* q, element item) {
    QueueNode* temp = (QueueNode*)malloc(sizeof(QueueNode));
    temp->item = item;
    temp->link = NULL;
    if (isEmpty(q)) {
        q->front = temp;
        q->rear = temp; 
    }
    else {
        q->rear->link = temp;
        q->rear = temp;
    }
}

element dequeue(LinkedQueueType* q) {  //�����Լ�
    QueueNode* temp = q->front;
    element data;
    if (isEmpty(q)) {
        fprintf(stderr,"\nť�� �������\n");
            exit(1);
    }
    else {
        data = temp->item;
        q->front = q->front->link;
        if (q->front == NULL)
            q->rear = NULL;
            free(temp);
            return(data);
    }
}

display(LinkedQueueType* q) {  //����Լ�
    QueueNode* p;
    printf("\n���� ť�� ����:");
    for (p = q->front; p != NULL;p = p->link)
        printf(" %d->", p->item);
        printf("��\n\n");
      
}

void main() {
    LinkedQueueType q;

    init(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    display(&q);  // ���� ť�� ������ �տ������� ������� ��� 

    printf("dequeue()=%d\n", dequeue(&q));
    printf("dequeue()=%d\n", dequeue(&q));
    printf("dequeue()=%d\n", dequeue(&q));

}