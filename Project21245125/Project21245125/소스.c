#include <stdio.h>
#define MAX_STACK_SIZE 100
#define MAZE_SIZE 6

typedef struct {
	short r;
	short c;
}urea;

typedef struct {
	urea stack[MAX_STACK_SIZE];
	int top;
}StackType;

void init_stack(StackType* s) {
	s->top = -1;
}

int is_empty(StackType* s) {
	return (s->top == -1);
}

int is_full(StackType* s) {
	return(s->top == (MAX_STACK_SIZE - 1));
}

void push(StackType* s, urea item) {
	if (is_full(s)) {
		fprintf(stderr, "스택 포화 에러\n");
		return;
	}
	else s->stack[++(s->top)] = item;
}

urea pop(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->stack[(s->top)--];
}

urea peek(StackType* s) {
	if (is_empty(s)) {
		fprintf(stderr, "스택 공백 에러\n");
		exit(1);
	}
	else return s->stack[s->top];
}

urea here = { 1,0 };
urea entry = { 1,0 };


char maze[MAZE_SIZE][MAZE_SIZE] = {
	{'1','1','1','1','1','1'},
	{'e','0','1','0','0','1'},
	{'1','0','0','0','1','1'},
	{'1','0','1','0','1','1'},
	{'1','0','1','0','0','A'},
	{'1','1','1','1','1','1'}
};

void push_loc(StackType* s, int r, int c) {
	if (r < 0 || c < 0) return;
	if (maze[r][c] != '1' && maze[r][c] != '.') {
		urea tmp;
		tmp.r = r;
		tmp.c = c;
		push(s, tmp);
	}
}

void maze_print(char maze[MAZE_SIZE][MAZE_SIZE]) {
	printf("\n");
	for (int r = 0; r < MAZE_SIZE; r++) {
		for (int c = 0; c < MAZE_SIZE; c++) {
			printf("%c", maze[r][c]);
		}
		printf("\n");
	}
}

void printStack(StackType* s) {
	int i = s->top;
	for (; 0 <= i; i--) {
		printf("스택높이 %d / %d 행 %d 열\n", i, s->stack[i].r, s->stack[i].c);
	}
}

void main(void) {

	int r, c;
	StackType s;
	init_stack(&s);
	here = entry;

	while (maze[here.r][here.c] != 'A') {

		r = here.r;
		c = here.c;

		maze[r][c] = ".";
		maze_print(maze);
		push_loc(&s, r - 1, c);
		push_loc(&s, r + 1, c);
		push_loc(&s, r, c - 1);
		push_loc(&s, r, c + 1);

		if (is_empty(&s)) {
			printf("실패\n");
			return;
		}
		else here = pop(&s);
	}
	printf("성공");
}