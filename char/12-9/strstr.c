#include <string.h>
#include <stdio.h>

int main( void )
{ 
	char s[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	char sub[] = "B";
	char *p;
	int loc;

	p = strstr(s, sub);

	loc = (int)(p - s);

	printf("%s\n\n", s);
	if ( p != NULL )		//�迭�� 1������Ұ� 0���Ͷ� ��ġ���� +1�� ����� �˾� ���⽱�� ���´�
		printf( "ù��° %s�� %d��° �ܾ�� �߰�!!\n", sub, loc +1);
	else
		printf( "%s�� �߰ߵ��� �ʾ���\n", sub );
}