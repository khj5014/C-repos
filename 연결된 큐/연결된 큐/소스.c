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

void init(LinkedQueueType* q) { q->front = q->rear = NULL; }  //초기화````
int isEmpty(LinkedQueueType* q) { return (q->front == NULL); } //공백

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

element dequeue(LinkedQueueType* q) {  //삭제함수
    QueueNode* temp = q->front;
    element data;
    if (isEmpty(q)) {
        fprintf(stderr,"\n큐가 비어있음\n");
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

display(LinkedQueueType* q) {  //출력함수
    QueueNode* p;
    printf("\n현재 큐의 상태:");
    for (p = q->front; p != NULL;p = p->link)
        printf(" %d->", p->item);
        printf("끝\n\n");
      
}

void main() {
    LinkedQueueType q;

    init(&q);

    enqueue(&q, 1);
    enqueue(&q, 2);
    enqueue(&q, 3);

    display(&q);  // 현재 큐의 내용을 앞에서부터 순서대로 출력 

    printf("dequeue()=%d\n", dequeue(&q));
    printf("dequeue()=%d\n", dequeue(&q));
    printf("dequeue()=%d\n", dequeue(&q));

}