#include <stdio.h>
#include <conio.h>

// getch()����ϱ�
int main(void)
{
	int ch;		
	int a;
//	while ((ch = _getch()) != 'q')  _putch(ch);
	while ((ch = getchar()) != EOF)putchar(ch);
	return 0;
}