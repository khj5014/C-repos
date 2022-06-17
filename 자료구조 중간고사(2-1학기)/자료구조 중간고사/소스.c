#include<stdio.h>
#include<stdlib.h>

typedef int element;
typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

typedef struct CListType {
	ListNode* temp;
} CListType;

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

ListNode* search(CListType* list, element x)
{
	ListNode* p = list->temp;
	do {
		if (p->data == x) { // ���� ���� ���� ���ٸ� 
			printf("����");
			return 0;
		} //Ž�� ����

		p = p->link;      //if�� �������� ������ p�� �̵�������
	} while (p != list->temp);
	printf("����");
	return 0; //Ž�� ����
}

int get_size(CListType* list) {

	ListNode* p = list->temp;
	int count = 0;
	do
	{
		count++;
		p = p->link;
	} while (p != list->temp); {

	}
	return count;
}

void display(ListNode** phead, ListNode* p)
{
	printf("����ִ� ������ : ");
	do {
		printf("%d,", p->data);
		p = p->link;
	} while (p != *phead);
	printf("%d", p->data);
	p = p->link;
	printf("\n");
}

int main() {

	CListType list;
	list.temp = NULL;

	ListNode* tmpNode = create_node(1);
	insert_node(&list, tmpNode);
	tmpNode = create_node(2);
	insert_node(&list, tmpNode);
	tmpNode = create_node(3);
	insert_node(&list, tmpNode);
	tmpNode = create_node(4);
	insert_node(&list, tmpNode);
	tmpNode = create_node(5);
	insert_node(&list, tmpNode);

	display(&list, tmpNode);

	printf("\n���� ����Ʈ ����� ���� = %d\n", get_size(&list));

	int s;
	printf("\n�˻��� �����͸� �Է��Ͻÿ� : ");
	scanf_s("%d", &s);
	search(&list, s);
}