#include<stdio.h>
#include<stdlib.h>
#include<memory.h>
#define _CRT_SECURE_NO_WARNING


typedef struct  {
	int data;
	struct TreeNode *left, *right;
}TreeNode;

//			 15
//		 4		 20
//	   1  77   16   25


TreeNode n1 = { 1, NULL, NULL };
TreeNode n7 = { 77, NULL, NULL };
TreeNode n2 = { 4, &n1, &n7 };
TreeNode n3 = {16, NULL, NULL};
TreeNode n4 = {25, NULL, NULL};
TreeNode n5 = { 20, &n3, &n4 };
TreeNode n6 = { 15, &n2, &n5 };
TreeNode* root=&n6;

//중위순회
inorder(TreeNode *root)
{
	if (root) {
		inorder(root->left);		// 왼쪽서브트리순회
		printf("%d  ", root->data);	// 노드방문
		inorder(root->right);		// 오른쪽서브트리순회
	}
}
// 전위순회
preorder(TreeNode* root) {
	if (root) {
		printf("%d  ", root->data);	// 노드방문
		preorder(root->left);		// 왼쪽서브트리순회
		preorder(root->right);		// 오른쪽서브트리순회
	}
}
// 후위순회
postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);		// 왼쪽서브트리순회
		postorder(root->right);		// 오른쪽서브트리순회
		printf("%d  ", root->data);	// 노드방문
	}
}

void main() {
	
	printf("\n");
	printf("중위순회탐색 : ");
	inorder(root);
	printf("\n");
	
	printf("전위순회탐색 : ");
	preorder(root);
	printf("\n");
	
	printf("후위순회탐색 : ");
	postorder(root);
	printf("\n");
}