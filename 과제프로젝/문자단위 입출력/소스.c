#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	FILE* fp = NULL;

	fp = fopen("sample.txt", "w");
	if (fp == NULL)
		printf("���� ���� ����!\n");
	else
		printf("\n���� ���� ����!\n");
	fputc('a',fp);
	fputc('b',fp);
	fputc('c',fp);
	fputc('d',fp);
	fputc('e',fp);

	printf("���Ͽ� �Է��� �Ϸ�Ǿ����ϴ�.\n\n");

	fclose(fp);
	return 0;
}