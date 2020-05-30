#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void init(ListNode* L) {   //�ʱ�ȭ
	L->link = 0;
}

ListNode* create_node(int x)  // ����Ʈ�� �� ��� ���� 
{
	ListNode* d = malloc(sizeof(ListNode));
	d->data = x;
	d->link = NULL;
	return d;
}

// phead: ����Ʈ�� ��� �������� ������  
// node : ���Ե� ���

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