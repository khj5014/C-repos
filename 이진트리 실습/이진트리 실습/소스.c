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

//������ȸ
inorder(TreeNode *root)
{
	if (root) {
		inorder(root->left);		// ���ʼ���Ʈ����ȸ
		printf("%d  ", root->data);	// ���湮
		inorder(root->right);		// �����ʼ���Ʈ����ȸ
	}
}
// ������ȸ
preorder(TreeNode* root) {
	if (root) {
		printf("%d  ", root->data);	// ���湮
		preorder(root->left);		// ���ʼ���Ʈ����ȸ
		preorder(root->right);		// �����ʼ���Ʈ����ȸ
	}
}
// ������ȸ
postorder(TreeNode* root) {
	if (root) {
		postorder(root->left);		// ���ʼ���Ʈ����ȸ
		postorder(root->right);		// �����ʼ���Ʈ����ȸ
		printf("%d  ", root->data);	// ���湮
	}
}

void main() {
	
	printf("\n");
	printf("������ȸŽ�� : ");
	inorder(root);
	printf("\n");
	
	printf("������ȸŽ�� : ");
	preorder(root);
	printf("\n");
	
	printf("������ȸŽ�� : ");
	postorder(root);
	printf("\n");
}