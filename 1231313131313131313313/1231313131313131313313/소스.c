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

// phead: 리스트의 헤드 포인터의 포인터  
// node : 삽입될 노드

void insert_node(ListNode** phead, ListNode* node) {

	if (*phead == NULL) {
		*phead = node;
		node->link = node;
	}
	else {
		node->link = (*phead)->link;    // (1) 
		(*phead)->link = node;		    // (2) 
	}
}

ListNode* search(ListNode* list, element data) 
{

}
void display(ListNode** phead, ListNode* p)
{
	do {
		printf("%d->", p->data);
		p = p->link;
	} while (p != *phead);
	printf("%d->", p->data);
	p = p->link;
	printf("\n");
}

int get_size(ListNode* list) {
	int count = 0;
	ListNode* p = list;
	while (p != NULL) {
		count++;
		p = p->link;
	}
	return count;
}

int main() {
	ListNode* list = NULL;

	int h;
		
	for (int i = 0; i < 5; i++) {
		printf("노드 #%d 데이터  : ", i+1);
		scanf_s("%d", &h);
		insert_node(&list ,create_node(h));
	}
		printf("\n연결 리스트 노드의 개수 = %d\n", get_size(list));
}