#include "���.h"

//�����Է¹ޱ�
int get_int(char* text) {
	printf("%s", text);
	int temp = 0;

	if (!scanf("%d", &temp)) {
		printf(" �� �����޽��� - ���ڸ� �Է����ּ���\n");
		Sleep(2000);
		system("cls");
		rewind(stdin);
		return get_int(text);
	}
	rewind(stdin);
	return temp;
}
//�޴� �ޱ�
//�޴� �ޱ�
int get_menu(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 3) { return temp; }
	printf(" �� �����޽��� - [ 1 ~ 3 ]������ ���ڸ� �Է����ּ���\n");
	return get_menu(text);
}
//MVP��� �ޱ�
int get_MVP(char* text) {
	printf("\n   �� ����� ������ �������ּ���(MVP ���)\n   �� �����   �� �ǹ�   �� ���   �� ���̾�   �� ����  ");
	int temp = get_int(text);
	if (temp >= 1 && temp <= 5) { return temp; }
	printf(" �� �����޽��� - [ 1 ~ 5 ]������ ���ڸ� �Է����ּ���\n");
	return get_MVP(text);
}
