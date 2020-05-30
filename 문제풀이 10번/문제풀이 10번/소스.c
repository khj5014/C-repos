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
// m : ���Ե� ��� 

void insert_node(ListNode** List, ListNode* p, ListNode* m) {
	if (*List == NULL) { // ���鸮��Ʈ�� ���
		m->link = NULL;
		*List = m;
	}
	else if (p == NULL) { // p�� NULL�̸� ù��° ���� ����
		m->link = *List;
		*List = m;
	}
	else {		// p ����, �߰��� ����
		m->link = p->link;
		p->link = m;
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
			printf("��� #%d ������  : ", i+1);
			scanf_s("%d", &t);
			insert_node(&list,  NULL ,create_node(t));
		}
		printf("\n���� ����Ʈ ����� ���� = %d\n", count(list));
		

	}