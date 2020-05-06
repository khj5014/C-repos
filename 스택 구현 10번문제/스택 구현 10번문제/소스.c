#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;

//���� �ʱ�ȭ �Լ�
void init_stack(StackType* s)
{
	s->top = -1;
}

//���� ���� ���� �Լ�
int is_empty(StackType* s)
{
		return s->top == -1;
}

//��ȭ���� ���� �Լ�
int is_full(StackType* s)
{
	;
	return(s->top == (MAX_STACK_SIZE - 1));
}

//�����Լ�
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "���� ��ȭ ����\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}

// �����Լ� 
element pop(StackType* s)
{
	if (is_empty(s) == 0)
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

// ��ũ�Լ�
element peek(StackType* s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "���� ���� ����\n");
		exit(1);
	}
	else return s->stack[s->top];
}

void main()
{
	int n, m;
	StackType s;
	init_stack(&s);

	printf("���� �迭�� ũ�� : ");
	scanf_s("%d", &n);
	printf("������ �Է��Ͻÿ� : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &m);
		push(&s, m);
	}
	printf("������ ���� �迭 : ");
	for (int i= s.top; 0 <= i; i--) {
		printf("%d ", s.stack[i]);
	}
	return 0;
}