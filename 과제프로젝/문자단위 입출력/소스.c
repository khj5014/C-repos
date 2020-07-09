#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("파일 열기 실패!\n");
	else
		printf("\n파읽 열기 성공!\n");
	fputc('a',fp);
	fputc('b',fp);
	fputc('c',fp);
	fputc('d',fp);
	fputc('e',fp);

	printf("파일에 입력이 완료되었습니다.\n\n");

	fclose(fp);
	return 0;
}