#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct {
	int stack[MAX_STACK_SIZE];
	int top;
}StackType;

typedef struct Queuetype {
	StackType s1, s2;
}Queuetype;

//���� �ʱ�ȭ �Լ�
void init_stack(StackType* s)
{
	s->top = -1;
}
//���� ���� ���� �Լ�
int is_empty(StackType* s) {
	return s->top == -1;
}
//��ȭ���� ���� �Լ�
int is_full(StackType* s)
{
	return(s->top == (MAX_STACK_SIZE - 1));
}
//�����Լ�
void push(StackType* s, int item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}
// ������ �Լ� 
int pop(StackType* s)
{
 return s->stack[(s->top)--];
}
//���� ��� �Լ�
void print_stack(StackType* s)
{
	printf("\n");
	int i = s->top;
	printf("  ���� ����\n");
	for (; 0 <= i; i--)
	{
		printf(" %d��° ���� = %d\n", i+1, s->stack[i]);
	}
	printf("\n");
}

//////////// ť �Լ� ////////////////
void init_Queue(Queuetype* q) {
	q->s1.top = -1;
	q->s2.top = -1;
}
void Queue_push(Queuetype* q, int item) {
	push(&(q->s1), item);
	return;
}
int Queue_pop(Queuetype* q) {
	if (is_empty(&(q->s2))) {  //����#2�� ������� ���� 
		while (!is_empty(&(q->s1))) {  //����#1�� ��� ��Ҹ� ������ 
			push(&(q->s2), pop(&(q->s1)));//����#2�� �ִ´�
		}
	}
	return 	pop(&(q->s2));
}
//�����Լ�
int main(void) {

	Queuetype q;
	init_Queue(&q);
	
	int k,h,n = 0;

	printf("\n����ũ�⸦ �����ּ��� : ");
	scanf_s("%d", &k);
	
	printf("������ �Է����ּ���(���� ���� ����1�� ����˴ϴ�)");

	for (k; 0 < k; k--) {
		scanf_s("%d", &h);
		Queue_push(&q, h);
		
	}
	print_stack(&q);

	printf("Ž���� ť�� ũ�⸦ �����ּ��� : (���� ũ�Ⱚ�� �����ϰ�)");
	scanf_s("%d", &n);
	printf("\n");
	for (int j=0; j < n; j++ ) {
		printf("%d��° ť %d\n", j+1, Queue_pop(&q));
	}
}