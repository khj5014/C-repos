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
	if ( p != NULL )		//배열은 1번쨰요소가 0부터라서 위치값에 +1을 해줘야 알아 보기쉽게 나온다
		printf( "첫번째 %s가 %d번째 단어에서 발견!!\n", sub, loc +1);
	else
		printf( "%s가 발견되지 않았음\n", sub );
}