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
// tmpNode : 삽입될 노드 

void insert_node(ListNode** List, ListNode* p, ListNode* tmpNode) {
	if (*List == NULL) { // 공백리스트인 경우
		tmpNode->link = NULL;
		*List = tmpNode;
	}
	else if (p == NULL) { // p가 NULL이면 첫번째 노드로 삽입
		tmpNode->link = *List;
		*List = tmpNode;
	} 
	else {		// p 다음, 중간에 삽입
		tmpNode->link = p->link;
		p->link = tmpNode;   
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