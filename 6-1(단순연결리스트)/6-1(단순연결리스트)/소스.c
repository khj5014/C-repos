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

// List: ����Ʈ�� ��� �������� ������ 
// p : ���� ��� 
// tmpNode : ���Ե� ��� 

void insert_node(ListNode** List, ListNode* p, ListNode* tmpNode) {
	if (*List == NULL) { // ���鸮��Ʈ�� ���
		tmpNode->link = NULL;
		*List = tmpNode;
	}
	else if (p == NULL) { // p�� NULL�̸� ù��° ���� ����
		tmpNode->link = *List;
		*List = tmpNode;
	} 
	else {		// p ����, �߰��� ����
		tmpNode->link = p->link;
		p->link = tmpNode;   
	} 
}

void display(ListNode* p)   //�ݺ�����
{
	while (p != NULL)
	{
		printf("%d->", p->data);
		p = p->link;
	}
	printf("\n");
}

int main() {
	ListNode *link;
	ListNode *list = NULL;

	ListNode* tmpNode = create_node(3); 
	insert_node(&list, NULL, tmpNode);

	tmpNode = create_node(2);   
	insert_node(&list, NULL, tmpNode);

	tmpNode = create_node(1);   
	insert_node(&list, NULL, tmpNode);

	display(list);

	printf("%d", list->link->link->data);
}