#include <stdio.h>
#include <stdlib.h>

typedef int element;

typedef struct ListNode {
	element data;
	struct ListNode* link;
} ListNode;

void error(char* message)
{
	fprintf(stderr, "%s\n", message);
	exit(1);
}

ListNode* create_node(int x) {
	ListNode* p = malloc(sizeof(ListNode));
	p->data = x;
	p->link = NULL;

	return p;
}

void insert_node(ListNode** phead, ListNode* p, ListNode* new_node)
{
	if (*phead == NULL) {
		new_node->link = NULL;
		*phead = new_node;
	}
	else if (p == NULL) {
		new_node->link = *phead;
		*phead = new_node;
	}
	else {
		new_node->link = p->link;
		p->link = new_node;
	}
}

int main(void)
{
	ListNode* list = NULL;
	int i; //����� ������ �ޱ� ���� ����
	int count = 0;

	printf("\n");
	printf("����� ���� : ");
	scanf_s("%d", &i);

	for (int k = 0; i > k; k++) { //����� ���� i�� ��ŭ �ݺ�
		element tmpdata; //����� �����͸� �ޱ� ���� ����

		printf("����� #%d�� ������ : ", k + 1);
		scanf_s("%d", &tmpdata);

		insert_node(&list, NULL, create_node(tmpdata));
		count++;
	}
	printf("���� ����Ʈ ����� ���� : %d", count);

}