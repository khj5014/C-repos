#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void init(ListNode* L) {   //초기화
	L->link = 0;
}

ListNode* create_node(int x)  // 리스트의 새 노드 생성 
{
	ListNode* d = malloc(sizeof(ListNode));
	d->data = x;
	d->link = NULL;
	return d;
}

// List: 리스트의 헤드 포인터의 포인터 
// p : 선행 노드 
// m : 삽입될 노드 

void insert_node(ListNode** List, ListNode* p, ListNode* m) {
	if (*List == NULL) { // 공백리스트인 경우
		m->link = NULL;
		*List = m;
	}
	else if (p == NULL) { // p가 NULL이면 첫번째 노드로 삽입
		m->link = *List;
		*List = m;
	}
	else {		// p 다음, 중간에 삽입
		m->link = p->link;
		p->link = m;
	}
}

void display(ListNode* p)   //반복버전
{
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}

int count(ListNode*num) {
	int count = 0;
	ListNode* p = num;
	while (p != NULL) {
		count++;
		p = p->link;
	}
	return count;
}

int main() {
	
		ListNode* list = {NULL};
		int t;


		for (int i = 0; i < 5; i++) {
			printf("노드 #%d 데이터  : ", i+1);
			scanf_s("%d", &t);
			insert_node(&list,  NULL ,create_node(t));
		}
		printf("\n연결 리스트 노드의 개수 = %d\n", count(list));
		

	}