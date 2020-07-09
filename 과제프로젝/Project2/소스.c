#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>



int main(void)
{
	FILE* fp;
	
	char buffer[100];

	fp = fopen("sample.txt", "w");
	fputs("ABCDEFGHIJKLMNOPQRSTUVWXYZ", fp);
	fclose(fp);

	fp = fopen("sample.txt", "r");
	

	
	fseek(fp, 3, SEEK_SET);
	printf("fseek(fp, 3, SEEK_SET) = %c \n", fgetc(fp));

	fseek(fp, -1, SEEK_END);
	printf("fseek(fp, -1, SEEK_END) = %c \n", fgetc(fp));

	fclose(fp);
	return 0;
}