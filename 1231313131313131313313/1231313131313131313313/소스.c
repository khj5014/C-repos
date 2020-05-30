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
		printf("��� #%d ������  : ", i+1);
		scanf_s("%d", &h);
		insert_node(&list ,create_node(h));
	}
		printf("\n���� ����Ʈ ����� ���� = %d\n", get_size(list));
}