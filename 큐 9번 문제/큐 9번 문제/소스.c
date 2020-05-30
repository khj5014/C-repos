#include <stdio.h>
#define MAX_STACK_SIZE 100

typedef struct {
	int stack[MAX_STACK_SIZE];
	int top;
}StackType;

typedef struct Queuetype {
	StackType s1, s2;
}Queuetype;

//스택 초기화 함수
void init_stack(StackType* s)
{
	s->top = -1;
}
//공백 상태 검출 함수
int is_empty(StackType* s) {
	return s->top == -1;
}
//포화상태 검출 함수
int is_full(StackType* s)
{
	return(s->top == (MAX_STACK_SIZE - 1));
}
//삽입함수
void push(StackType* s, int item)
{
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else
		s->stack[++(s->top)] = item;
}
// 꺼내기 함수 
int pop(StackType* s)
{
 return s->stack[(s->top)--];
}
//스택 출력 함수
void print_stack(StackType* s)
{
	printf("\n");
	int i = s->top;
	printf("  현재 스택\n");
	for (; 0 <= i; i--)
	{
		printf(" %d번째 스택 = %d\n", i+1, s->stack[i]);
	}
	printf("\n");
}

//////////// 큐 함수 ////////////////
void init_Queue(Queuetype* q) {
	q->s1.top = -1;
	q->s2.top = -1;
}
void Queue_push(Queuetype* q, int item) {
	push(&(q->s1), item);
	return;
}
int Queue_pop(Queuetype* q) {
	if (is_empty(&(q->s2))) {  //스택#2가 비어있을 때는 
		while (!is_empty(&(q->s1))) {  //스택#1의 모든 요소를 꺼내서 
			push(&(q->s2), pop(&(q->s1)));//스택#2에 넣는다
		}
	}
	return 	pop(&(q->s2));
}
//메인함수
int main(void) {

	Queuetype q;
	init_Queue(&q);
	
	int k,h,n = 0;

	printf("\n스택크기를 정해주세요 : ");
	scanf_s("%d", &k);
	
	printf("정수를 입력해주세요(받은 값은 스택1에 저장됩니다)");

	for (k; 0 < k; k--) {
		scanf_s("%d", &h);
		Queue_push(&q, h);
		
	}
	print_stack(&q);

	printf("탐색할 큐의 크기를 정해주세요 : (스택 크기값과 동일하게)");
	scanf_s("%d", &n);
	printf("\n");
	for (int j=0; j < n; j++ ) {
		printf("%d번째 큐 %d\n", j+1, Queue_pop(&q));
	}
}