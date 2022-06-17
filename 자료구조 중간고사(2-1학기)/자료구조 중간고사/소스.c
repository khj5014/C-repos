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

ListNode* search(CListType* list, element x)
{
	ListNode* p = list->temp;
	do {
		if (p->data == x) { // 만약 받은 값이 같다면 
			printf("성공");
			return 0;
		} //탐색 성공

		p = p->link;      //if문 충족하지 않으면 p를 이동시켜줌
	} while (p != list->temp);
	printf("실패");
	return 0; //탐색 실패
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
	printf("들어있는 데이터 : ");
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

	printf("\n연결 리스트 노드의 개수 = %d\n", get_size(&list));

	int s;
	printf("\n검색할 데이터를 입력하시오 : ");
	scanf_s("%d", &s);
	search(&list, s);
}