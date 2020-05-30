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

void insert_first(ListNode** phead, ListNode* node){
	
	if (*phead == NULL) {
		*phead = node;
		node->link = node;
	}
	else {
		node->link = (*phead)->link;    // (1) 
		(*phead)->link = node;		    // (2) 
	}
}

void display(ListNode** phead, ListNode* p)
{
	do {
		printf("%d->", p->data);
		p = p->link;
	} while (p != *phead);
		printf("%d->",p->data);
		p = p->link;
	printf("\n");
}

int main() {
	ListNode* list = NULL;

	ListNode* tmpNode = create_node(3);
	insert_first(&list, tmpNode);

	tmpNode = create_node(2);
	insert_first(&list, tmpNode);

	tmpNode = create_node(1);
	insert_first(&list, tmpNode);

	display(&list, tmpNode);
}