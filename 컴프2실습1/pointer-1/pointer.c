#include<stdio.h>


int main(void) {

	int i = 3000;
	int* p = NULL;  //�����ͼ���

	p = &i;    // i�� �ּҰ��� p�� ����

	printf("i=%d\n\n", i);		//p�� ����Ű�� �ּҿ��� ���������
	printf("&i=%u\n\n", &i);

	printf("p=%u\n\n", p);		//�����͸� ����Ͽ� ���
	printf("*p=%u\n\n", *p);



	return 0;
}