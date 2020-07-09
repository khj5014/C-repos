#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp = NULL;
  

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
        printf("파일 열기 실패\n");
    else
        printf("파일 열기 성공\n");

    while (!feof(fp))
    {
        fgetc(fp);
    }
    printf("파일을 읽어왔습니다.\n\n");

    fclose(fp);
    printf("\n");
    return 0;
}