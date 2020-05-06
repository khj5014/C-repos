#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef int element;
typedef struct {
	element stack[MAX_STACK_SIZE];
	int top;
}StackType;

//스택 초기화 함수
void init_stack(StackType* s)
{
	s->top = -1;
}

//공백 상태 검출 함수
int is_empty(StackType* s)
{
		return s->top == -1;
}

//포화상태 검출 함수
int is_full(StackType* s)
{
	;
	return(s->top == (MAX_STACK_SIZE - 1));
}

//삽입함수
void push(StackType* s, element item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}

// 삭제함수 
element pop(StackType* s)
{
	if (is_empty(s) == 0)
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

// 피크함수
element peek(StackType* s)
{
	if (is_empty(s))
	{
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->stack[s->top];
}

void main()
{
	int n, m;
	StackType s;
	init_stack(&s);

	printf("정수 배열의 크기 : ");
	scanf_s("%d", &n);
	printf("정수를 입력하시오 : ");
	for (int i = 0; i < n; i++) {
		scanf_s("%d", &m);
		push(&s, m);
	}
	printf("반전된 정수 배열 : ");
	for (int i= s.top; 0 <= i; i--) {
		printf("%d ", s.stack[i]);
	}
	return 0;
}