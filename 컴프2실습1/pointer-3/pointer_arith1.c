#include<stdio.h>


int main() {   //�ڷ����� ���� �ּҸ�ŭ ������ �����ִ� ����

	char* pc;
	int* pi; 
	double *pd;

	pc = (char*)10000;
	pi = (char*)10000;
	pd = (char*)10000;

	printf("���� ��pc = %d,pi = %d,pd = %d\n\n", pc, pi, pd);


	pc++;
	pi++;
	pd++;
	printf("������pc = %d,pi = %d,pd = %d\n\n", pc, pi, pd);
	printf("pc+2 = %d,pi+2 = %d,pd2 = %d\n\n", pc+2, pi+2, pd+2);
	
	return 0;
}