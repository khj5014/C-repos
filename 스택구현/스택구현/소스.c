#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
		int top;
}StackType;

//���� �ʱ�ȭ �Լ�
void init_stack(StackType *s)
{
	s->top = -1;
}

//���� ���� ���� �Լ�
int is_empty(StackType *s)
{
	if (s->top == -1)
	{
		printf(" ������ �����ϴ�.\n\n\n");
		printf("�й� : 20174257 ������\n\n\n");
		exit(1);
	}
	else {
		printf(" ������ �����߽��ϴ�.");
		return s;
	}
}

//��ȭ���� ���� �Լ�
int is_full(StackType *s)
{;
return(s->top == (MAX_STACK_SIZE - 1));
}

//�����Լ�
void push(StackType *s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}

// �����Լ� 
element pop(StackType *s) 
{
	if (is_empty(s) == 0)
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

// ��ũ�Լ�
element peek(StackType *s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->stack[s->top];
}

void printStack(StackType* s)
{
	printf("\n");
	int i = s->top;

	for (; 0 <= i; i--)
	{
		printf(" %d��° ���� = %d\n", i, s->stack[i]);
	}
}

void main() 
{
	StackType s;
	
	init_stack(&s);
	
	push(&s, 6);
	push(&s, 5);
	push(&s, 4);
	
	printStack(&s);
	
	printf("\n");
	printf(" %d\n", pop(&s));
	printf(" %d\n", pop(&s));
	printf(" %d\n", pop(&s));	
	printf(" %d\n", is_empty(&s));
	
}