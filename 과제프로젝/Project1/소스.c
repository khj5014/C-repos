#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    FILE* fp = NULL;
  

    fp = fopen("sample.txt", "r");
    if (fp == NULL)
        printf("���� ���� ����\n");
    else
        printf("���� ���� ����\n");

    while (!feof(fp))
    {
        fgetc(fp);
    }
    printf("������ �о�Խ��ϴ�.\n\n");

    fclose(fp);
    printf("\n");
    return 0;
}