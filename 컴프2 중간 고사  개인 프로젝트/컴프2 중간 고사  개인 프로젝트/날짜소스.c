#include "header.h"

//�� �ޱ�
int get_day(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 31) {

		return temp;
	}
	printf("  �� �����޽��� - [ 1 ~ 31 ]������ ���ڸ� �Է����ּ���\n");
	return get_day(text);
}
//�� �ޱ�
int get_month(char* text) {
	int temp = get_int(text);
	if (temp >= 1 && temp <= 12) {

		return temp;
	}
	printf(" �� �����޽��� - [ 1 ~ 12 ]������ ���ڸ� �Է����ּ���\n");
	return get_month(text);
}

//�����Է¹ޱ�
int get_int(char* text) {
	printf("%s", text);
	int temp = 0;

	if (!scanf("%d", &temp)) {
		rewind(stdin);
		return get_int(text);
	}
	rewind(stdin);
	return temp;
}