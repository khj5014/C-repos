#include <stdio.h>
//������ ������ ���ڿ� ����ϱ�
int main(void)
{
	char *p = "HelloWorld";
	printf("%s \n", p);

	p = "Welcome to C World!";
	printf("%s \n", p);

	char q[] = "Goodbye";
	printf("%s \n", q);

	q[0] = 'a';		
	printf("%s \n", q);

	return 0;
}