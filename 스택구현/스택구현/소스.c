#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
		int top;
}StackType;

//스택 초기화 함수
void init_stack(StackType *s)
{
	s->top = -1;
}

//공백 상태 검출 함수
int is_empty(StackType *s)
{
	if (s->top == -1)
	{
		printf(" 스택이 없습니다.\n\n\n");
		printf("학번 : 20174257 김희재\n\n\n");
		exit(1);
	}
	else {
		printf(" 스택을 제거했습니다.");
		return s;
	}
}

//포화상태 검출 함수
int is_full(StackType *s)
{;
return(s->top == (MAX_STACK_SIZE - 1));
}

//삽입함수
void push(StackType *s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}

// 삭제함수 
element pop(StackType *s) 
{
	if (is_empty(s) == 0)
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

// 피크함수
element peek(StackType *s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
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
		printf(" %d번째 스택 = %d\n", i, s->stack[i]);
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